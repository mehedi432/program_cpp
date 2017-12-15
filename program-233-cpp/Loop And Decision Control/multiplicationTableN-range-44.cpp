/*
   Task-> Display multiplication table up to a given range.
   1.Start
   2.Take input from user howMany terms(range) and (number).
   3.while(i <= range):
        ->make i =1;
        ->number * i;
   4.cout << number * i;
   5.End.
 */

#include <iostream>
using namespace std;

int main()
{
        int number, range;

        cout << "Enter an integer to multiply: ";
        cin >> number;

        cout << "Enter how many term you want: ";
        cin >> range;

        for (int i = 1; i <= range; i++) {
                cout << number << " * " << i << " = " << number * i << endl;
        }

        return 0;
}
