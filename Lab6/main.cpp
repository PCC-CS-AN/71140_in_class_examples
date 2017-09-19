/*
 * Assignment Title
 * Full Name - ID Numbers
 * 
 * Short problem description
 * 
 */

#include <iostream>
#include <cassert>

using namespace std;

// Function Declarations
void test();

// Calculates the positive square root using the quadratic formula
// Assumes the answer is real, that is: b^2 >= 4ac
// a - the x^2 term. The function assumes a is not zero
// b - the x term.
// c - the 1 term.
// return - the positive root of ax^2 + bx + c
double quadratic(double a, double b, double c);

// Calculates the distance between two points
// x1 - The x value of the first point
// y1 - The y value of the first point
// x2 - The x value of the second point
// y2 - The y value of the second point
// return - the distance between (x1,y1) and (x2,y2)
double distance(double x1, double y1, double x2, double y2);

int main() {
  // Statements
  test();

  // Exit Program
  return 0;
}

// Tests
void test() {
  // test quadratic
  assert(quadratic(1,2,-15),3);
  assert(quadratic(1,6,8),-2);
  
  // Write at least 3 additional tests here
  
  // test distance
  assert(distance(5,2,2,-2),5);
  assert(distance(-5,13,-10,1),13);

  // Write at least 3 additional tests here
  
}

// Function Definitions
double distance(double x1, double y1, double x2, double y2) {
  return 0; // calculate your answer here
}
double quadratic(double a, double b, double c) {
  return 0; // calculate your answer here
}
