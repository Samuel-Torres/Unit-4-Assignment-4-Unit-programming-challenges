// 1. Minimum/Maximum Write a program that asks the user to enter two numbers.
// The program should use the conditional operator to determine which number is the smaller and which is the larger.

#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    double minNum, maxNum;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    if (num1 < num2)
    {
        minNum = num1;
        maxNum = num2;
    }
    else if (num1 > num2)
    {
        minNum = num2;
        maxNum = num1;
    }
    else
    {
        minNum = maxNum = num1;
    }

    cout << "The smaller number is: " << minNum << endl;
    cout << "The larger number is: " << maxNum << endl;

    return 0;
}