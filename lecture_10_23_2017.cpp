#include <vector>
#include <cassert>
#include <string>
#include <iostream>

using namespace std;

string to_s(vector<int> v) {
	string answer = "";
	int i = 0;
	
	while(i < v.size()) {
		answer = answer + to_string(v[i]) + " ";
		i = i+1;
	}
	return answer;
}

// Sort numbers in a vector from smallest to largest.
// Input:
// 		v - list to be sorted
// Output: sorted list
vector<int> sort(vector<int> v);
void test_sort();

int main() {
	cout << to_s(sort(vector<int>({ 1, 3, 2 }))) << endl;
	cout << to_s(sort(vector<int>({ 1, 1, 3, 2 }))) << endl;
	cout << to_s(sort(vector<int>({ 1, -3, 2 }))) << endl;
	cout << to_s(sort(vector<int>({ 1 }))) << endl;
	cout << to_s(sort(vector<int>({ }))) << endl;
	
	test_sort();
	return 0;
}

vector<int> sort(vector<int> v) {
	int temp;
	int j;
	int i = 0;
	while(i < v.size()) {
		// from i up to v.size() - 1
		j = i + 1;
		while(j < v.size()) {
			if(v[i] > v[j]) {
				// swap
				temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}
			j = j + 1;
		}
		i = i + 1;
	}
	return v;
}
void test_sort() {
	assert(sort(vector<int>({ 1, 3, 2 })) == vector<int>({ 1, 2, 3 }));
	assert(sort(vector<int>({ 1, 1, 3, 2 })) == vector<int>({ 1, 1, 2, 3 }));
	assert(sort(vector<int>({ 1, -3, 2 })) == vector<int>({ -3, 1, 2 }));
	assert(sort(vector<int>({ 1 })) == vector<int>({ 1 }));
	assert(sort(vector<int>({ })) == vector<int>({ }));
	return;
}






