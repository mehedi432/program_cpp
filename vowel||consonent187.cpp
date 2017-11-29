/*
   Task-> Find a Letter is vowel || consonant..
   1.Start
   2.Input a Character
   3.Is (charInput == 'a' || charInput == 'A' || charInput=='e' || charInput == 'E' || charInput == 'I' || charInput

   == 'i' || charInput == 'o' || charInput == 'O' || charInput == 'u' || charInput == 'U'):
      1.True-> cout << "Vowel"..
      2.False-> consonant..
   4.Exit
 */
//Function that takes somsething && returns Nothing..
#include <iostream>
using namespace std;
void check(char charInput){

        if(charInput == 'a' || charInput == 'A' || charInput=='e' || charInput == 'E' || charInput == 'I' || charInput

           == 'i' || charInput == 'o' || charInput == 'O' || charInput == 'u' || charInput == 'U') {
                cout <<charInput <<" is a Vowel..";
        }
        else{
                cout << charInput <<" is a  consonant..";
        }

}
int main()
{
        char charInput;
        std::cout << "Enter a Character to check vowel || consonant :" << '\n';
        std::cin >> charInput;
        check(charI5nput);
        return 0;
}
