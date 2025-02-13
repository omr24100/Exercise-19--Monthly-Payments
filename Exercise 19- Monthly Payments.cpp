// Exercise 19- Monthly Payments.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/* 
File Name: Exercuse 19- Monthly Payments
GitHub URL:https://github.com/omr24100/Exercise-19--Monthly-Payments.git
Programmer: Olivia Ruiz
Date: 2/12/25
Requirments: The monthly payments on a loan may be calculated by the following formula: Payment= rate(1+rate)^N/((1+Rate)^N -1) * L
Rate is the monthly intrest rate, which is the annual intrest rate divided by 12.
(12% annual intrest would be 1 percent monthly intrest.) N is the number of payments, and L is the amount of loan.
Write a program that asks for these values then displays a report similar to:
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double annualRate, monthlyRate, loanAmount;
    int numPayments;

    cout << "Enter annual interest rate (as %): ";
    cin >> annualRate;
    monthlyRate = (annualRate / 100) / 12;

    cout << "Enter number of monthly payments: ";
    cin >> numPayments;

    cout << "Enter loan amount: $";
    cin >> loanAmount;

    double payment = (monthlyRate * pow(1 + monthlyRate, numPayments) /
        (pow(1 + monthlyRate, numPayments) - 1)) * loanAmount;

    cout << fixed << setprecision(2);
    cout << "\nLoan Amount: $" << loanAmount << endl;
    cout << "Annual Interest Rate: " << annualRate << "%" << endl;
    cout << "Number of Payments: " << numPayments << endl;
    cout << "Monthly Payment: $" << payment << endl;
    cout << "Total Payment: $" << payment * numPayments << endl;

    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
