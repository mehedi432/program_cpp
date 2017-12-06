/*
   Task-> Program to Calculate Sum of Natural Numbers..
   
Start:
 * 1.Positive integers 1, 2, 3, 4... are known as natural numbers.
 * 2.This program takes a positive integer from user( suppose user entered n ) then,
   this program displays the value of 1+2+3+....+n..

   ---This program assumes that user always enters positive number---.

 * 3. If user enters negative number, Sum = 0 is displayed and program is terminated.
Stop

 */

#include <iostream>
using namespace std;

int main()
{
        int naturalNumber, sum = 0;

        cout << "Enter a positive integer: ";
        cin >> naturalNumber;

        for (int i = 1; i <= naturalNumber; ++i) {
                sum = sum + i;
        }

        cout << "Sum = " << sum;
        return 0;
}
