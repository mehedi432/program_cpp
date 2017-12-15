/*
   Task-> Display multiplication table up to 10.
   1.Start
   2.Take input from user (number).
   3.while(i <= 10):
        ->make i =1;
        ->number * i;
   4.cout << number * i;
   5.End.
 */

#include <iostream>
using namespace std;

int main()
{
        int number;

        cout << "Enter a positive integer: ";
        cin >> number;

        for (int i = 1; i <= 10; i++) {
                cout << number << " * " << i << " = " << number * i << endl;
        }

        return 0;
}
