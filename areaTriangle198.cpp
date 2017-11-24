/*
   Task-> Calculate Area of a Triangle.
   Function that Take's Nothing, Return's Something.
   1. Start.
   2. Take input of Base && Height.
   3. Apply 1/2*Base*height formula to Calculate.
   4.Show output.
 */
 
#include <iostream>
using namespace std;
//Function Defination.
int totalArea(){
        float base, height, tArea;
        cout << "Enter the base :" <<endl;
        cin >> base;
        cout << "Enter the height :" <<endl;
        cin >> height;
        //tArea = 0.5* base* height;
        return (0.5* base* height);
}

int main()
{
        float area;
        area = totalArea();
        cout << "Area of Triange is : "<< area;


}
