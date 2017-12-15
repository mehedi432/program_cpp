/*
   Task-> Program to Reverse an Integer.
   1.Start
   2.Take Input number && make variable reversedNumber, remainder.
   3.Set reversedNumber = 0.
   4.while(number != 0)
        ->repeat step 5.
   5.remainder = number%10; //produce the remainder
        reversedNumber = reversedNumber*10 + remainder;
        number = number / 10;
   6.cout << Result.
   7.End.
 */


#include <iostream>
using namespace std;

int main()
{
        int number, reversedNumber = 0, remainder;

        cout << "Enter an integer: ";
        cin >> number;

        while(number != 0)
        {
                remainder = number%10; //produce the remainder
                reversedNumber = reversedNumber*10 + remainder;
                number = number / 10;
        }

        cout << "Reversed Number = " << reversedNumber;

        return 0;
}
