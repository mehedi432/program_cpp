/*
   Task-> Check a number whether it is Even || Odd.
   1.Start
   2.Take a Number as input.
   3.Is number%2==0
      1)True-> cout (even).
      2)False-> cout (odd)
   4.End.
 */
 
#include <iostream>
using namespace std;

//Function that Take's something && Returns nothing.
int check(int number){
        if(number%2==0) {
                cout << "The number is Even.";
        }
        else{
                cout << "The number is Odd.";
        }
}
int main() {
        /* code */
        int number, result;
        cout << "Enter a Number to check Wheather it is even || odd :";
        cin >> number;
        result = check(number);
        return 0;
}
