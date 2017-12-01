/*
   Task-> Find Letter Grade with Conditional Operator...
   1.Start
   2.Take input Number From the user.
   3.Is(inputNumber>100 && inputNumber <0):
      1.True->Invalid Number.
      2.False->GoTo next step.
   4.Is (inputNumber<=100&&inputNumber>=80):
      1.True->cout <<"A+".
      2.False->GoTo next step.
   5.Is (inputNumber <=80 && inputNumber>=70):
      1.True->cout >>"A"
      2.False->GoTo next step.
   6.Is (inputNumber <=70 && inputNumber>=60):
      1.True->cout >>"A-"
      2.False->GoTo next step.
   7.Is (inputNumber <=60 && inputNumber>=50):
      1.True->cout >>"B"
      2.False->GoTo next step.

   8.Is (inputNumber <=50 && inputNumber>=40):
      1.True->cout >>"C"
      2.False->GoTo next step.
   9.Is (inputNumber <=40 && inputNumber>=33):
      1.True->cout >>"D"
      2.False->GoTo next step.
   10.Else:
      ->You have failed in the exam.
 */
 
 #include <iostream>
using namespace std;
void check(float inputNumber){
        if(inputNumber > 100 && inputNumber <0) {
                cout << "Invalid Number.";
        }
        else if(inputNumber<=100 && inputNumber>=80) {
                std::cout << "You have got A+" << '\n';
        }
        else if(inputNumber<=80 && inputNumber>=70) {
                std::cout << "You have got A" << '\n';
        }
        else if(inputNumber<=70 && inputNumber>=60) {
                std::cout << "You have got A-" << '\n';
        }
        else if(inputNumber<=60 && inputNumber>=50) {
                std::cout << "You have got B" << '\n';
        }
        else if(inputNumber<=50 && inputNumber>=40) {
                std::cout << "You have got C" << '\n';
        }
        else if(inputNumber<=40 && inputNumber>=33) {
                std::cout << "You have got D" << '\n';
        }
        else{
                std::cout << "Sorry ! You have failed in the exam." << '\n';
        }
}

int main()
{
        float inputNumber;
        cout << "Enter mark to see your Letter Grade : ";
        cin >> inputNumber;
        check(inputNumber);
}
