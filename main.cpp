/*
Developer: Jayden Veloz
File Name: Ch4Ex1.cpp
Date: 10 / 9 / 26

Requirements:
Write a program that asks the user to enter two different integers. The program should use the
conditional operator to determine which number is the smaller and which is the larger.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int num1, num2;

    cout << "Please enter an integer: ";
    cin >> num1;

    cout << "Please enter a second integer: ";
    cin >> num2;

    cout << "-------------------------" << endl;
    cout << "First integer = " << num1 << endl;
    cout << "Second integer = " << num2 << endl;
    cout << "\n";

    if (num1 > num2) {
        cout << "Your first integer (" << num1 << ") is larger. Your second integer (" << num2 << ") is smaller.";
    } else if (num1 < num2) {
        cout << "Your second integer (" << num2 << ") is larger. Your first integer (" << num1 << ") is smaller.";
    }

    return 0;
}