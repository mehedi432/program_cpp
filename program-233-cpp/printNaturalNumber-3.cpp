/*
   Task-> Print the natural number (1...n)..

    1.Start
    2.Input the limit of the number.
    3.Initialize increment.
    4.While i<=n.
    5.print(i).
    6.update(i).
    7.Stop.
 */
 
 #include <iostream>
using namespace std;

int display(int number)
{
        for(int i = 1; i <= number; i++) {
                cout << "Natural number's are : " << i <<endl;
        }
}

int main()
{
        int number;
        cout << "Enter Limit number :";
        cin >> number;
        display(number);
        //cout <<""

}
