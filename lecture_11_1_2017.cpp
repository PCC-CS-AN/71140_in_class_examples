#include <string>
#include <iostream>

using namespace std;

string remove_spaces(string s);

string reverse(string s);

bool check_palindrome(string s);

int main() {
	string s;
	getline(cin, s);
	cout << check_palindrome(s) << endl;
	return 0;
}

string remove_spaces(string s) {
	int i = 0;
	string out = "";
	while(i < s.length()){
		if(s[i] != ' '){ 
			out = out + s[i];
		}
		i = i + 1;
	}
	return out;
}

string reverse(string s) {
	int i = s.length() - 1;
	string out = "";
	while(i >= 0) {
		out = out + s[i];
		i = i - 1;
	}
	return out;
}

bool check_palindrome(string s) {
	int front, back;
	front = 0;
	back = s.length() - 1;
	while(back > front) {
		while(s[front] == ' ') {
			front = front + 1;
		}
		while(s[back] == ' ') {
			back = back - 1;
		}
		if(s[front] != s[back]) {
			return false;
		}
		front = front + 1;
		back = back - 1;
		
	}
	return true;
}



