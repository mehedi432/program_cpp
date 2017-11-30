/*
   Task-> A simple program that uses Switch-Case for finding Vowel/Consonant..
   1. Start
   2. Function check for && writing switch case statement.
   3. Is charInput == case(charInput):
      1.True-> cout << "Vowel";
      2.False->default:
              ->cout <<"consonant"
   4. Exit.
 */
// Function that takes somsething return nothing.
#include <iostream>
using namespace std;
void check(char charInput){
        char choice;
        cin >> choice;
        switch (choice) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
                cout << charInput <<" is a vowel";
                break;

        default:
                cout << charInput << " is a consonant";
        }
}
int main()
{
        char choice;
        cout << " Enter an Character To check vowel || consonant ";
        check(choice);

}
