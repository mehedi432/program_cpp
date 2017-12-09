/*
   Task-> Sum of natural series with quabes.
   1.Start
   2.Take Input upto term.
   3.result= 1,i= 2.
   4.while(i<=n)repeat step 5.
   5.result = resul*i*i.
   6.cout << Result.
 */
 #include <iostream>
using namespace std;
int multQuabe(int nTerm){
        int result = 1;
        for(int i = 1; i<=nTerm; i+=2) {
                cout << i<<endl;
                result = result * (i*i);

        }
        return result;

}
int main()
{
        int nTerm,display;
        cout << "Enter How many term you want to Multiply: "<<endl;
        cin >> nTerm;
        display = multQuabe(nTerm);
        cout << "The result is : " <<display;


        return 0;
}
