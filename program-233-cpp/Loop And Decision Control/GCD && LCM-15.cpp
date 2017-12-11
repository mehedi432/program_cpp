/*
   Task-> Find the GCD && LCM of two integer number.
   1.Start
   2.Take input number1,number2:(Don't make change number1 && number2).
   3.Set int tempNumber1 = number1,
      int tempNumber2 = number2.
   4.While(tempNumber2 != 0){
    int remainder = tempNumber1 % tempNumber2;
    tempNumber1 = tempNumber2;
    tempNumber2 = remainder.
   }
   5.GCD = tempNumber1.
   6.LCM = (number1*tempNumber2)/GCD.
   7.cout << GCD && LCM.
   8.End.
 */

 #include <iostream>
using namespace std;
int findGCD(int number1,int number2){
        int tempNumber1=number1,tempNumber2=number2,remaindr;
        while (tempNumber2 != 0) {
                remaindr = tempNumber1%tempNumber2;
                tempNumber1 = tempNumber2;
                tempNumber2 = remaindr;
        }
        int gcd = tempNumber1;
        return gcd;

}
int main()
{
        int number1,number2,gcd,lcm;
        cout <<" Enter two number to see the GCD && LCD of two int Number : "<<endl;
        cin >> number1 >> number2;
        findGCD(number1,number2);
        gcd = findGCD(number1,number2);
        cout << "G.C.D of " <<number1 <<" && "<< number2<< " " << "is" << " " << gcd <<endl;
        lcm = (number1*number2)/gcd;
        cout << "L.C.M of " <<number1 <<" && "<< number2<< " " << "is" << " " << lcm;
        return 0;


}
