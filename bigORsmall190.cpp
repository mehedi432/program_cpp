/*
   Task-> Check between two number Which is big || small.
   1.Start
   2.Take input of Two number to check
   3.Is number1>number2
      1.True-> cout << "number1 is Big number"
      2.False-> GoTo next condition
   4.Is number2>number1
      1.True-> cout << "number2 is big number"
      2.False->cout << "number is 0".
   5.Stop.
 */
 
#include <iostream>
using namespace std;
//Function that takes something Returns nothing..
int check(int number1,int number2){
        if(number1 > number2) {
                cout << number1 << " is big among Two numbers.\n";
        }
        else if(number2 > number1) {
                cout << number2 << " is Big among Two numbers";
        }
        else{
                cout << " The Entered number is Equal to 0 || not a number";
        }
}

int main(){
        int number1, number2, display;
        cout <<"Enter Two number To check Big Number between them : \n";
        cin >> number1 >> number2;
        display = check(number1,number2);
        return 0;
}
