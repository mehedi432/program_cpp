/*
   Task-> Find Factorial using For Loop..
   1.Start
   2.Take input from user how many terms(nTerm):
   3.if(nTerm==0):
        1.True-> cout << "1";
        2.False-> GoTo next step.
   4.while(i<=nTerm):
        ->Repeat step 5.
   5.result=1,i=1,i++:
        result = result * i;
   6.cout << Result.
   7.End.
 */

#include <iostream>
using namespace std;
int factorial(int nTerm){
        int result = 1;
        for(int i =1; i<= nTerm; i++) {
                result = result*i;
        }
        return result;
}
int main() {
        int display,nTerm;
        cout << "Enter a Number to find the factorial of That given number: ";
        cin >> nTerm;
        if(nTerm == 0) {
                cout << "The factorial of 0 == 1";
        }
        else{
                display = factorial(nTerm);
                cout << "The factorial of "<<nTerm<<" == "<<display;
        }
        return 0;
}
