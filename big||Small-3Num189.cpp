/*
   Task-> Find Big number between three inputed numbers
   1.Start
   2.Take input 3 numbers from the user
   3.Is number1>number2 && number1>number3:
        1.True->cout <<"number1 is big."
        2.False->GoTO next step.
   4.Is number2>number1 && number2>number3 :
        1.True->cout <<"number2 is Big"
        2.False->GoTo next step
   5.Is number3>number1 && number3>number2:
        1.True->cout <<"number3 is big"
        2.False->cout <<"Number is == 0 || not a Number"
   6.End.
 */
#include <iostream>
using namespace std;
//function that takes something Returns Nothing
int check(int number1,int number2,int number3){
        if(number1>number2 && number1>number3) {
                cout <<number1 <<" is Big among three Numbers.";
        }
        else if(number2>number1 && number2>number3) {
                cout << number2 << " is Big among Three Numbers.";
        }
        else if(number3>number1 && number3>number2) {
                cout <<number3 <<" is Big among Three Numbers. ";
        }
        else{
                cout <<"Your enteed Number is 0 || not a Number.";
        }
}
int main()
{
        int number1,number2,number3,display;
        cout <<"Enter three Integer number to check big among them :\n";
        cin >> number1 >> number2 >> number3;
        display = check(number1,number2,number3);
        return 0;
}
