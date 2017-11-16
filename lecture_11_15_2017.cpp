#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;


int main(){
	ifstream in;
	ofstream out;
	string s;
	char c;
	
	out.open("test.txt");
	
	in.open("words.txt");
	
	getline(in, s);
	out << s << endl;
	
	in.get(c);
	out << c << endl;
	
	in >> s;
	out << s << endl;
	
	in.close();
	
	in.open("lecture_11_15_2017.cpp");
	getline(in,s);
	out << s << endl;
	in.close();
	out.close();
	
	out.open("test.txt");
	out << "what is happen?" << endl;
	out.close();
	
	cout << "enter a file name:" << endl;
	cin >> s;
	out.open(s);
	out << "this is another file" << endl;
	out.close();

	out.open("test.txt", ios::app);
	out << "appending to the file" << endl;
	out.close();
	
	vector<string> words = {};
	srand(time(0));
	
	in.open("words.txt");
	while(! in.eof()){
		getline(in,s);
		words.push_back(s);
	}
	cout << words[rand()%words.size()] << endl;
	
	in.close();
	in.open("../test.cpp");
	while(! in.eof()){
		getline(in,s);
		cout << s << endl;
	}
	in.close();
	return 0;
}

vector<int> get_digits() {
	vector<int> v = {};
	char c;
	cin.get(c);
	while(48 <= c && c <= 57) {
		
		v.push_back(c - 48);
		cin.get(c);
	}
	return v;
}