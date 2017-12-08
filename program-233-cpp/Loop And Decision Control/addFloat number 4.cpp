
/*
   Task-> Add Natural Floating point number(1.5)forEach loop.

    1.Start
    2.Take input how Long the sum will be.
    3.Make sum = 0 as initial value && i = 1.5.
    4.If(i<n):
      1.True:
        ->sum = sum + i
        ->i++
    5.Else :
      2.False
        ->Exit
    6.Stop.
 */
 
#include <iostream>
using namespace std;
int addition(int howManynumbers){
        float sum =0;
        for(int i =1.5; i<=howManynumbers; i++) {
                sum = sum +i;
        }
        return sum;
}

int main()
{
        int howManynumbers,result;
        cout << "Enter how many Terms you want to add: " <<endl;
        cin >> howManynumbers;
        result = addition(howManynumbers);
        cout <<"You want the result for " << howManynumbers << "is : "<< result;


}
