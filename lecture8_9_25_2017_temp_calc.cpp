/*
 * HEADER
 */

#include <iostream>
#include <cassert>
#include <string>

using namespace std;

// Function Headers

// Void functions
void run();
void test();
void test_convert();
void test_char_to_str();

// My functions

// Converts a temperature from either celsius, fahrenheit, or kelvin to one of these units.
// Input:
//     units_in - units we are converting from
//     units_out - units we are converting to
//     temp - the temperature to covert
// Output:
//     the converted temperature
double convert(char units_in, char units_out, double temp);

// Converts a character c,f,or k to a string celsius, fahrenheit, or kelvin.
// Input:
//    unit - a character representiaion of the units
// Output:
//    a string representation of the units
string char_to_str(char unit);

int main() {
  char t;
  cin >> t;
  if(t == 't') {
    test();
  } else {
    run();
  }
  return 0;
}

void test(){
  test_convert();
  test_char_to_str();
  return;
}

void run() {
  char in, out;
  double temp;
  cout << "what's the input units" << endl;
  cin >> in;
  cout << "what're the output units" << endl;
  cin >> out;
  cout << "what is the temperature in " << char_to_str(in) << "?" << endl;
  cin >> temp;
  cout << temp << " " << char_to_str(in) << " is equal to " << convert(in, out, temp) << " " << char_to_str(out) << endl;
  return;
}
void test_convert() {
  assert(convert('c','c', 0) == 0);
  assert(convert('c','c', 10) == 10);
  assert(convert('c','f',0) == 32);
  assert(convert('c', 'k', 250) == 523.15);
  return;
}
double convert(char units_in, char units_out, double temp) {
  double answer;
  if(units_out == 'f') {
    answer = temp * 9 / 5.0 + 32;
  } else if(units_out == 'k') {
    answer = temp + 273.15;
  } else {
    answer = temp;
  }
  return answer;
}
void test_char_to_str() {
  assert(char_to_str('c') == "celsius");
  assert(char_to_str('k') == "kelvin");
  assert(char_to_str('f') == "fahrenheit");
  return;
}
string char_to_str(char unit) {
  if(unit == 'k') {
    return "kelvin";
  } else if(unit == 'f') {
    return "fahrenheit";
  } else {
    return "celsius";
  }
}
