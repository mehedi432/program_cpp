/*
   Task-> A program for Checking a number Divible by 5 || not..
   1.Start
   2.Take number input
   3.Is (number%5==0):
      1.True->cout << "Divible"
      2.False->cout << "not Divible"
   4.End.
 */
 
#include <iostream>
using namespace std;
void check(int inputNumber){
        if(inputNumber%5 == 0) {
                cout << inputNumber <<" is Divible By 5 "<< endl;
        }
        else{
                cout << "Number is not Divible by 5."<<endl;
        }
}

int main()
{
        int inputNumber;
        cout << "Enter a number to check wheather the number is Divible by 5 || Not : "<<endl;
        cin >> inputNumber;
        check(inputNumber);
        return 0;
}
