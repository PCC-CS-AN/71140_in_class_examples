#include <iostream>
#include <vector>
#include <cassert>

using namespace std;
using Row = vector<char>;
using Board = vector<Row>;
// Checks a single column for a win
bool connect_col(Board b, int col) {
	int i = 0;
	
	while(i < b.size() - 3) {
		if( b[i][col] == b[i+1][col] && 
			b[i+1][col] == b[i+2][col] && 
			b[i+2][col] == b[i+3][col] ) {
			return true;	
		}
		i = i + 1;
	}
	return false;
}
bool connect_vert(Board b) {
	int i = 0;
	while(i < b[0].size()) {
		if(connect_col(b, i)){
			return true;
		}
		i = i + 1;
	}
	return false;
}
// checks a single set of four spaces for a forward diag connect four
// Assume valid input
bool connect_single_fd(Board b, int row, int col) {
	return b[row][col]     == b[row+1][col-1] &&
		   b[row+1][col-1] == b[row+2][col-2] &&
		   b[row+2][col-2] == b[row+3][col-3];
}

bool connect_fd_row(Board b, int row) {
	int i = 3;
	while(i < b.size()) {
		if(connect_single_fd(b, row, i)){
			return true;
		}
		i = i + 1;
	}
	return false;
}

bool connect_forward_diag(Board b) {
	int i = 0;
	
	while(i < 3) {
		if(connect_fd_row(b, i)) {
			return true;
		}
		i = i + 1;
	}
	return false;
}
bool connect_diag(Board b) {
	return connect_forward_diag(b) ; //|| connect_back_diag(b);
}

bool connect_four(Board b) {
	return /*connect_across() ||*/ connect_vert(b) || connect_diag(b); 
}

int main() {
	Board b = { { ' ', ' '} };
	
	assert(connect_four(b) == false);
	
	return 0;
}