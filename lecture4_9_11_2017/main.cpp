/*
 * 2.1.3
 * Bob bobberson - 213456
 *
 * Calculates a 7.6% retroactive pay increase and outputs backpay, new annual
 * salary, and the new monthly salary given the previous annual salary and how
 * many months of retroactive pay workers are due.
 *
 * Inputs:
 *     double prev_annual_salary - The workers' previous annual salary
 *     int months_of_retroactive_pay - How many months the pay increase
 *                                     applies to
 * Outputs:
 *     double new_annual_salary - The workers' annual salary after the raise
 *     double new_monthly_salary - The workers' monthly salary after the raise
 *     double backpay - The total amount of backpay each worker is due
 *
 */

#include <iostream>

using namespace std;

int main() {
    // Variable Declarations
    // constants
    const double PERCENT_INC = 0.076;
    // inputs
    double prev_annual_salary;
    int months_of_retroactive_pay;
    // outputs
    double new_annual_salary, new_monthly_salary, backpay;

    // Get user input
    cout << "What was your previous annual salary?" << endl;
    cin >> prev_annual_salary;
    cout << "How many months of retroactive pay are you owed?" << endl;
    cin >> months_of_retroactive_pay;

    // Calculate new salary, backpay
    backpay = prev_annual_salary*PERCENT_INC*months_of_retroactive_pay/12;
    new_annual_salary = prev_annual_salary*PERCENT_INC + prev_annual_salary;
    new_monthly_salary = new_annual_salary / 12;

    // Output the answer
    cout << "Your backpay is $" << backpay << endl;
    cout << "Your new annual salary is $" << new_annual_salary << endl;
    cout << "Your new monthly salary is $" << new_monthly_salary << endl;


    // Exit Program
    return 0;
}
