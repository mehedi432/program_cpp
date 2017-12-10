/*
   Task-> Check Wheathe a number is Prime || Not..
   1.Start
   2.Take input a number to check.(inputNumber)
   3.i=2,count=0:
   4.Is i<number:
        1.True->GoTo step 5.
        2.False->GoTo step 6.
   5.Is(inputNumber%i==0):
        1.True->count++,GoTo step 6.
        2.False->GoTo step 4.
   6.Is(count == 0)
        1.True->cout << "Prime".
        2.False-> "Not Prime".
   7.End.
 */


#include <iostream>
using namespace std;
void primeCheck(int inputNumber){
        int count =0; //count will monitor how many times the number is divisible..
        for(int i =2; i<inputNumber; i++) {
                if(inputNumber%i==0) {
                        count++; //count jodi 2 er beshi hoy tahole prime nah.
                        break;
                }
        }
        if(count==0) {
                cout <<inputNumber << "is a Prime number..";
        }
        else{
                cout <<inputNumber << " is not a Prime number..";

        }
}

int main()
{
        int inputNumber;
        cout << "Enter a positive Integer to check Wheathe it is prime || Not: ";
        cin >> inputNumber;
        primeCheck(inputNumber);
        return 0;
}
