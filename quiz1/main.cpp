#include <iostream>

using namespace std;

int main()
{
    double celcius, fahrenheit;
    cout << "This program converts from celcius to fahrenheit." << endl;
    cout << "Please enter a temperature in celcius ";
    cin >> celcius;
    fahrenheit = celcius * 9/5 + 32;
    cout << fahrenheit << " degrees fahrenheit." << endl;
    return 0;
}
