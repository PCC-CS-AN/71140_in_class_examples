#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Pos {
public:
	int x;
	int y;

};

int main(){
	int x = pow(2,2);
		string s = "a";
	x++;
	x += 1;
	/*
	do {
		cout << "please enter an even number" << endl;
		cin >> x;
	} while(x % 2 != 0);
	cout << x / 2 << endl;
*/
	for(int i = 0; i < 5; i++) {
		cout << i << endl;
		if(true) {
					break;
		}
	}
	cin >> x;

	switch('a') {
		case 'a':
			cout << "one" << endl;
			//break;
		case 'b':
			cout << "zero" << endl;
			//break;

		default:
			cout << "else" << endl;
	}
	
	Pos a, b;
	a.x = 1;
	a.y = 2;
	b.x = 3;
	b.y = 4;

	cout << a.dist(b) << endl;
	return 0;
}

double Pos::dist(Pos p) {
	z = 100;
	cout << z << endl;
	return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
}