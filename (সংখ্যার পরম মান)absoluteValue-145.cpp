/*
   Task-> Finding absolute value( সংখ্যার পরম মান )using library function.
        library-function: abs(inputNumber);
   1.Start
   2.Take input the number to see the absolute value.
   3.make variable display to show the result.
   4.display=abs(inputNumber);
   5.cout << display.
   6.End.
 */
 
 #include <iostream>
using namespace std;
int main()
{
        int display,inputNumber;
        cout << "Enter Number to see the Absolute value ( সংখ্যার পরম মান ):";
        cin >> inputNumber;
        display = abs(inputNumber);
        cout << " The Absolute value of "<< inputNumber << " is : "<<display;
}
