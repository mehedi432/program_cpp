/*
   Task-> Take an input &&  check Wheather the number is Leap year || Not.
   1.Start
   2.Take Year as input
   3. Is (number%400) == 0
      1.True->Leap Year..
      2.False->not Leap Year..
   4.Cout << " Leap Year !"
   5.End
 */
 
#include <iostream>
using namespace std;

//Function that takes something && returns nothing.
int check(int year){
        if(year%400 == 0) {
                cout << year << "-" << "The Year is Leap-Year";
                //return true;
        }
        else{
                cout << year << "-" << "is not Leap-Year";
                //return false;
        }
}
int main()
{
        int year,display;
        cout << "Enter a year to check wheather it is Leap Year || Not..:";
        cin >> year;
        display = check(year);//Function Call..
}
