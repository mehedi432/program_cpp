/*
   Task-> Find the area of a triangle from given length of 3 bahu.
   1.Start.
   2.Take input from user 3 lines of triangle.
   3.Calculate the semi-perimeter(s=(a+b+c)/2).
   4.Calculate the area using sqrt(s*(s-a)*(s-b)*(s-c)).
   5.Print the Area..
 */
#include <iostream>
#include <cmath>
using namespace std;
double calculation(int,int,int); //Global function prototype.

int main()
{
        double input_1,input_2,input_3,result;
        cout << "Give three input to show the area of a triangle :\n";
        cin >> input_1 >> input_2 >> input_3;
        result = calculation(input_1,input_2,input_3);
        cout << "Total calculated area :" << result;

}

//Takes something Returns something type function.
double calculation(int input_1,int input_2,int input_3){
        double totalArea,semi_perimeter;
        semi_perimeter = (input_1+input_2+input_3)/2;
        totalArea = sqrt(semi_perimeter*(semi_perimeter - input_1)*(semi_perimeter-input_2)*(semi_perimeter-input_3));
        return totalArea;
}
