/*
   Task-> Roots of a Quadratic Equation

   ax^2+bx+c =0 (where a,b,c are coefficient)
   Formula :x =(-b(+-)sqrt(b^2-4ac)) / 2a
   b^2-4ac (Known as discriminent of a quadric equation. The discriminent tells the nsturee of the root.)

   if (discriminant > 0):
   root_1 = (-b+sqrt(b^2-4ac))/(2a);
   root_2 = (-b-sqrt(b^2-4ac))/(2a);

   if (discriminant == 0):
   root_1 == root_2 == (-b)/(2a);

   if (discriminant < 0)
   root_1 = ((-b)/2a)+(i*sqrt(b^2-4ac))/2a);
   root_2 = ((-b)/2a)+(i*sqrt(b^2-4ac))/2a);

 * If (discriminent > 0):
        cout << "The roots are real && different.";
 * If (discriminent == 0):
        cout << "The roots are real && equal..";
 * If (discriminent < 0):
        cout << "The roots are complex && different."


 */


#include <iostream>
#include <cmath>
using namespace std;

int main() {

        float a, b, c, rootX_1, rootX_2, discriminant, realPart, imaginaryPart;
        cout << "Enter coefficients a, b and c: ";
        cin >> a >> b >> c;
        discriminant = b*b - 4*a*c;

        if (discriminant > 0) {
                rootX_1 = (-b + sqrt(discriminant)) / (2*a);
                rootX_2 = (-b - sqrt(discriminant)) / (2*a);
                cout << "Roots are real and different." << endl;
                cout << "rootX_1 = " << rootX_1 << endl;
                cout << "rootX_2 = " << rootX_2 << endl;
        }

        else if (discriminant == 0) {
                cout << "Roots are real and same." << endl;
                rootX_1 = (-b + sqrt(discriminant)) / (2*a);
                cout << "rootX_1 = rootX_2 =" << rootX_1 << endl;
        }

        else {
                realPart = -b/(2*a);
                imaginaryPart =sqrt(-discriminant)/(2*a);
                cout << "Roots are complex and different."  << endl;
                cout << "rootX_1 = " << realPart << "+" << imaginaryPart << "i" << endl;
                cout << "rootX_2 = " << realPart << "-" << imaginaryPart << "i" << endl;
        }

        return 0;
}
