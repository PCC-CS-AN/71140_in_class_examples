#include <vector>
#include <iostream>
#include <string>
#include <fstream>


using namespace std;

void f(int i, int j) {
	i = j;
}

int main(){
	int x = 0;
	f(x,1);
	cout << x << endl;
	
	return 0;
}