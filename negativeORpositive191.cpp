/*
   Task-> Check an inputed Number wheather it is Negative || Positive || 0.
   1.Start
   2.Take a Number to Check.
   3.(if) Is num > 0
    1.True.->cout <<"Positive Number."
    2.GoTo next step.
   4.(else if) Is num < 0
    1.True -> cout <<"Negative number."
    2.False -> GoTo next step.
   5. (else) Is num == 0
    1.True -> cout <<"Number is 0"
   6.End.
 */
#include <iostream>
using namespace std;

//function that Takes something(inputNumber) Returns Nothing
int check(int inputNumber){
        if(inputNumber > 0) {
                cout << "You have Enter a Positive Integer Number..";
        }
        else if(inputNumber < 0) {
                cout << "You have Enter a Negative Integer Number..";
        }
        else{
                cout << "You have Enter number which is 0 ";
        }
}

int main()
{
        int inputNumber, display;
        cout << "Enter a Number to Check wheather it is Negative || Positive :\n";
        cin >> inputNumber;
        display = check(inputNumber);
}
