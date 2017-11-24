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
//This function will produce the sum of number's.
//This function is a Example of Takes Nothing Returns Nothing.
//This part is Function Defination.
void sum(){
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
