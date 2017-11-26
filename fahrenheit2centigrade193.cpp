/*
   Task-> Convert Fahrenheit to Centigrade with Function.
   1.Start
   2.Take input Fahrenheit.
   3.Calculate (centigrade = (fahrenheit-32)/1.8).
   4.Show output.
   5.End.
 */
#include <iostream>
using namespace std;

//This is a Example of function that takes something && Returs something.

double convert(double fahrenheit){
        return ((fahrenheit-32)/1.8);//This will calculate the result && return the value.
}

int main()
{
        double fahrenheit, centigrade; //Fahrenheit is inputed from user.
        cout << "Enter the Temperature in Fahrenheit to convert :\n";
        cin >>  fahrenheit;
        centigrade = convert(fahrenheit);
        cout << "The result is : "<< centigrade <<"C";
        return 0;
}
