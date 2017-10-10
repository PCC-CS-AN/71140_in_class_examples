/**
 * 
 * Standard Header
 *
 **/

#include <iostream>
#include <cassert>
#include <string>

using namespace std;

/**
 * Data Definitions
 **/
enum class Square { X, O, B };

struct Row {
	Square left;
	Square center;
	Square right;
};
struct Board {
	Row top;
	Row middle;
	Row bottom;
};

const string HRULE = "---+---+---";
/**
 * Function Declarations
 **/

void test();
void run();

void test_b_to_s();
string to_s(Board b);

void test_r_to_s();
string to_s(Row r);

void print(Board b);
/**
 * Main Function
 **/

int main() {
  char t;

  cout << "Enter [t] to test, or any other character to run." << endl;
  cin >> t;
  if(t == 't') {
    test();
  } else {
    run();
  }
  return 0;
}

/**
 * Function Definitions
 **/

void test() {
	test_b_to_s();
	test_r_to_s();
}

void run() {
  // Variable Declarations
	Board b1 = {
		{ Square::O, Square::O, Square::X },
		{ Square::B, Square::X, Square::B },
		{ Square::O, Square::X, Square::B }
	};
  // Input

  // Output
	print(b1);
}
void test_r_to_s() {
	return;
}

string to_s(Square s) {
	if(s == Square::X) {
		return "X";
	} else if(s == Square::O) {
		return "O";
	} else {
		return " ";
	}
}

string to_s(Row r) {
	return " " + to_s(r.left) + " | " + to_s(r.center) + " | " + to_s(r.right) + " ";			
}
void test_b_to_s() {
	Board b1 = {
		{ Square::B, Square::B, Square::B },
		{ Square::B, Square::B, Square::B },
		{ Square::B, Square::B, Square::B }
	};
	string blank = "   |   |   \n"+
					HRULE + "\n" +
					"   |   |   \n" +
					HRULE + "\n" +
					"   |   |   \n";
	assert(to_s(b1) == blank);
	return;
}

string to_s(Board b) {
	return to_s(b.top) + "\n" + HRULE + "\n" + to_s(b.middle) + "\n" + HRULE + "\n" + to_s(b.bottom);	
}
void print(Board b) {
	cout << to_s(b) << endl;
}













