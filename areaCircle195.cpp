/*
   Task->FInd the Area of a Circle
   1.Start
   2.Take Radius as input from user.
   3.Calculate Area (area = pi*r*r)
   4.Show output.
   5.End
 */
 
#include <iostream>
using namespace std;
const double pi = 3.14159;//using constant vaiable.

double areaCircle(double radius)
{
        double area;
        area = pi * radius * radius;
        return area;
}

int main()
{
        double radius, area;
        cout << "Enter the radius of a Circle : \n";
        cin >> radius;
        area = areaCircle(radius);
        cout << "The area of Circle is : " << area;
        return 0;
}
