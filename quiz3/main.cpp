/*
 * Quiz 3
 * Full Name - ID Numbers
 *
 * Calculates a letter grade given a grade as a percentage.
 * Letter grades include A,B,C,D,F
 * Doesn't calculate plus or minus.
 * Precentages > %x9.5 round up.
 *
 * Inputs:
 *     double precentage_grade - the grade as a percentage
 *
 * Outputs:
 *     char letter_grade - the grade as a letter
 *
 */








#include <iostream>
using namespace std;

int main() {
  // Variable Declarations
    double percent_g;
    char letter_g;

  // Statements
    // Prompt User
    cout << "What is the grade as a percentage?" << endl;
    cin >> percent_g;

    // Check if the grade is an A
    if(percent_g >= 89.5) {
        letter_g = 'A';
    // Otherwise check if it's a B
    } else if(percent_g >= 79.5) {
        letter_g = 'B';
    // Otherwise check if it's a C
    } else if(percent_g >= 69.5) {
        letter_g = 'C';
    // Otherwise check if it's a D
    } else if(percent_g >= 59.5) {
        letter_g = 'D';
    } else {
        letter_g = 'F';
    }

    cout << "Your letter grade is " << letter_g << endl;
  // Exit Program
  return 0;



}







