#include <string>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<string> dict = { "hello",
	"goodbye",
	""
};
string random_word() {
	return dict[rand() % dict.size()];
}
int main() {
	srand(time(0));
	cout << string(random_word().length(), '_') << endl;
	return 0;
}