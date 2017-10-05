/**
 * 
 * This program will calculate the mpg of a trip given liters used and miles
 * driven and query and calculate repeatedly until the user quits.
 *
 **/

#include <iostream>
#include <cassert>

using namespace std;

/**
 * Global Constants
 **/
const double GALLONS_PER_LITER = 0.264179;


/**
 * Function Declarations
 **/

void test();
void run();

// Calculates the miles per gallon of a car's trip.
// Inputs:
// 		liters_used - the number of liters used.
// 		miles_driven - the miles driven.
// Output: 
//      the miles per gallon of the trip
double miles_per_gallon(double liters_used, double miles_driven);
void test_miles_per_gallon();

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
	test_miles_per_gallon();
}

void run() {
  	// Variable Declarations
	double liters_used, miles_traveled;
	bool done = false;
	
	while(!done) {
	  	// Input
		cout << "Enter the liters used:" << endl;
		cin >> liters_used;
		cout << "Enter the miles traveled:" << endl;
		cin >> miles_traveled;
		// Output
		cout << "Your mpg was:  " << miles_per_gallon(liters_used, miles_traveled)
			 << endl;
		cout << "Done?"<< endl;
		cin >> done;
	}
	return;
}

void test_miles_per_gallon() {
	
	assert(miles_per_gallon(0,0) == 0);
	assert(miles_per_gallon(1,0) == 0);
	assert(miles_per_gallon(0,1) == -1);
	
	assert(miles_per_gallon(1/GALLONS_PER_LITER,1) == 1);
	assert(miles_per_gallon(1, 2.64179) == 10);
	assert(static_cast<int>(miles_per_gallon(2,5)*100000) == 946328);
}
double miles_per_gallon(double liters_used, double miles_driven) {
	double gallons_used;
	// Avoids infinite mpg.
	if(liters_used == 0 && miles_driven > 0) {
		return -1;
	} else {
		// convert liters to gallons used.
		gallons_used = liters_used * GALLONS_PER_LITER;
		// divide miles driven by gallons used.
		return miles_driven / gallons_used;
	}
}
