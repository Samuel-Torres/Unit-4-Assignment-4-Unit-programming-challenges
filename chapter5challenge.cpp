// Sum of Numbers
// Write a program that asks the user for a positive integer value. The program should use a loop to get
// the sum of all the integers from 1 up to the number entered. For example, if the user enters 50, the
// loop will find the sum of 1, 2, 3, 4, . . ., 50. Input Validation: Do not accept a negative starting number.

#include <iostream>
using namespace std;

int main()
{
    int number;
    int sum = 0;

    cout << "Enter a positive integer: ";
    cin >> number;

    while (number <= 0)
    {
        cout << "Invalid input. Please enter a positive integer: ";
        cin >> number;
    }

    for (int i = 1; i <= number; i++)
    {
        sum += i;
    }

    cout << "The sum of integers from 1 to " << number << " is: " << sum << endl;

    return 0;
}