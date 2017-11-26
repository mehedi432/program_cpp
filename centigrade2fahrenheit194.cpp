/*
   Task-> Convert Centigrade to Fahrenheit..
   1.Start.
   2.Take input Centigrade.
   3.Calculate Fahrenheit = (1.8*Centigrade)+32.
   4.Show output result.
   5.End.
 */
 
#include <iostream>
using namespace std;
//Function that takes something returns something.
//Function that will Take centigrade as incoming and return Fahrenheit.
double convert(double centigrade){
        return ((1.8*centigrade)+32);//This will return the calculation Result
}

int main()
{
        double centigrade,fahrenheit;
        cout << "Enter Centigrade To convert Fahrenheit  \n:";
        cin >> centigrade;
        fahrenheit = convert(centigrade);
        cout << "Converted result of Fahrenheit is : " << fahrenheit;
}
