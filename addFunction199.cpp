/*
   The sum of two Integer.
   1.Start.
   2.Take two input.
   3.Make sum of Two number.
   4.Show the sum.
   5.End.
 */
#include <iostream>
using namespace std;
//We need not prototype if we declare our function if we write our function before main.
//This function will produce the sum of number's.
//This function that Takes Nothing Returns Nothing.
void sum(){ //This part is Function Defination.
        int input_1,input_2,result;
        cout << "Enter A number :"<<endl;
        cin >> input_1;
        cout << "Enter Another Number :";
        cin >> input_2;
        result = input_1 + input_2;
        cout << "result = " << result;
}

int main()
{
        sum(); //Function call.

}
