/**
 * 
 * Standard Header
 *
 **/

#include <iostream>
#include <cassert>

using namespace std;

/**
 * Function Declarations
 **/

void test();
void run();

void test_max();

// Returns the larger of two numbers.
// Inputs:
//        a - the first number to compare
//        b - the second number to compare
// Return:    the larger numbers
double max(double a, double b);

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
  test_max();
}

void run() {
  // Variable Declarations

  // Input

  // Output

}

void test_max() {
  assert(max(10, 0) == 10);
  assert(max(0,0) == 0);
  assert(max(-3.1, 2) == 2);
}
double max(double a, double b) {
  // If a is bigger than b
  if( a > b) {
    return a;
  } else {
    return b;
  }
}
