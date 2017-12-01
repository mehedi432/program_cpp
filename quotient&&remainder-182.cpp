/*
   Task-> Find Quotient && remainder of a Number.
   1.Start
   2.Take number && divisor
   3.Quotient = number / divisor
   4.Remainder = number % divisor.
   5.End.
 */
 
#include <iostream>
using namespace std;
int main()
{
        int number, divisor;
        cout << "Enter Number && divisor"<<endl;
        cin >> number >> divisor;
        cout << "Quotient = " << number / divisor << endl;
        cout << "Remainder = "<< number % divisor << endl;
        return 0;
}
