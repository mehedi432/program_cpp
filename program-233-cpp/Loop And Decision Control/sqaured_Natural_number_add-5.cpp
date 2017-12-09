/*
   Task-> Add the square value 1^2+2^2+3^2+....up to n'th term.(n==userInput).

   1.Start
   2.Input howManyterm need for addition.
   3.Make sum =0, i=1;
   4.While(i<=n)
        =>repeat step 5
   5.If condition is True:
        sum = sum + i*i;
        i=i+1;
   6.cout << Sum || Result.
   7.End.
 */

#include <iostream>
using namespace std;
float addSquare(int howManyterm){
        float sum = 0;
        for(int i = 1; i<= howManyterm; i++) {
                sum = sum + i*i; //This i*i returns the sqare of that iteation number for the Loop.
        }
        return sum;
}

int main()
{
        int howManyterm,display;
        cout << "Enter how many terms you want to add the square value 1^2+2^2+3^2+........ :"<<endl;
        cin >> howManyterm;
        display=addSquare(howManyterm);
        cout << "The result is :" <<display;

}
