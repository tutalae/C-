// Odd_or_Even.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{   
    int number;
    cout << "please enter the numbers:";
    cin >> number;
    if (number % 2 == 0) {
        cout << "the number is even";
    }
    else {
        cout << "the number is odd";
    }
    system("pause>0");
}

