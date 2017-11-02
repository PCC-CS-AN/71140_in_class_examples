#include <iostream>
#include <vector>
#include <string>

using namespace std;

char shift(char c){
    return static_cast<char>(c + 1);
}

vector<char> cipher(vector<char> msg){
    int i = 0;

    while(i < msg.size()){
        msg[i] = shift(msg[i]);
        i = i + 1;
    }
    return msg;
}

string to_s(vector<char> v) {
    int i = 0;
    string s = "{ ";
    while(i < v.size()) {
        s = s + v[i] + ", ";
        i = i+1;
    }
    s = s + " }";
    return s;
}

void print(vector<char> v) {
    cout << to_s(v) << endl;
}

int main()
{
    print(cipher({ 'a', 'b', 'c', 'd' }));
    return 0;
}
