/*
 * Purpose: Program that calculates the GCD of two postive intefers and keeps
 * track of how many times the gcd  function is called.
 * 
 * Written by: Samantha Liu
 * 
 * COMP61: HW10
 */

#include <iostream>

using namespace std;

int gcd(int a, int b);
int function_count = 0;

int main() {
    int a, b;

    cout << "This computes the GCD of two positive integers." << endl;
    cout << "Enter first integer: ";
    cin >> a;
    cout << "Enter second integer: ";
    cin >> b;

    if (a < 1 || b < 1) {
        cerr << "Error: can only compute positive integers" << endl;
        return 0;
    }

    cout << "GCD(" << a << "," << b << ") = " << gcd(a,b) << endl; 
    cout << "The function was invoked " << function_count << " times." << endl;
    return 0;
}

int gcd(int a, int b) {
    int c = a % b;
    function_count++;

    if (c == 0) {
        return b;
    } else {
        return gcd(b,c);
    }
    return 0;
}
