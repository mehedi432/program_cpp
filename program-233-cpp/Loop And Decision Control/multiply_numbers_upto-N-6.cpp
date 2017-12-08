/*
   Task-> Multiply numbers upto n'th term.
     ->1*2*3*4*......n;
     ->1*3*5*7*......n;
     ->2*4*6*8*......n;

   Algo:
    1.Start
    2.Take input howManyterm
    3.Result= 1,i=1;
    4.While i<=n repeat step 5.
    5.result = result * i
        i = i*1;
    6.cout << result.
    7.End.
 */
 #include <iostream>
using namespace std;
int multiplicationSeries(int howManyterm){
        int result = 1;
        for(int i =1; i<=howManyterm; i++) {
                result = result * i;
        }
        return result;
}
int main()
{
        int display,howManyterm;
        cout << "Enter howmany times you want to Multiply theseries(1*2*3*....n): "<<endl;
        cin >> howManyterm;
        display = multiplicationSeries(howManyterm);
        cout << "The result is :" << display <<endl;

}
