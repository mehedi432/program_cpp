/*
   Task-> Finding  Square root | সংখ্যার বর্গমূল using library function.
        library-function: sqrt(inputNumber);
   1.Start
   2.Take input the number to see the absolute value.
   3.make variable display to show the result.
   4.display = sqrt(inputNumber);
   5.cout << display.
   6.End.
 */
 
 #include <iostream>
 #include <cmath>
using namespace std;
int main()
{
        int display,inputNumber;
        cout << "Enter Number to see the  Square root | সংখ্যার বর্গমূল: ";
        cin >> inputNumber;
        display = sqrt(inputNumber);
        cout << " The Absolute value of "<< inputNumber << " is : "<<display;
}
