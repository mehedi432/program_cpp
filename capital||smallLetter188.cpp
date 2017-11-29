/*
   Task-> Find an Entered number Capital || small Letter.
   1.Start
   2.Take input a Character to check..
   3.Is (charInput >='A' && charInput <= 'Z'):
      1.True->cout <<"This is a capital Letter.."
      2.False->GoTo next step
   4.Is(charInput >='a' && charInput<='z'):
      1.True-> cout <<"This is a small letter."
      2.false-> cout <<"You have given a wrong input ."
   5.Stop
 */

//Function that takes something && returns Nothing..
#include <iostream>
using namespace std;
int check(char charInput){
        if(charInput>='A' && charInput<='Z') {
                cout << charInput << " is a capital Letter..";
        }
        else if(charInput >= 'a' && charInput <= 'z') {
                cout << charInput << " is a small Letter..";
        }
        else{
                cout <<"oops ! you have given a Wrong Input..";
        }
}
int main() {
        char charInput;
        cout << "Enter a Character to check capital Letter || small Letter : ";
        cin >> charInput;
        check(charInput);
        return 0;
}
