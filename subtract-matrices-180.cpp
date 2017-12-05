/*
   Task-> Subsract Two Matrices by taking input from the user.

   1.Start.
   2.Take rowInput && columnsInput.
   3.Take firstMatrix as input from the user.
   4.Take secondMatrix as input from the user.
   5.Subsract from firstMatrix to secondMatrix.
   6.Show the result.
   7.Stop.
 */
 
#include  <iostream>
using namespace std;
int inputRows,inputColumns,i,j;
int firstMatrix[10][10],secondMatrix[10][10],result[10][10];

int subtract(){
        cout <<"Enter the number of Rows && Columns :"<< endl;
        cin >>inputRows >>inputColumns;

        cout << "Enter the elements of first Matrix :"<< endl;
        for(i=0; i<inputRows; i++) {
                for(j=0; j<inputColumns; j++) {
                        cin >> firstMatrix[i][j];
                }
        }
        cout <<"Enter the elements of second Matrix  : "<<endl;
        for(i=0; i<inputRows; i++) {
                for(j=0; j<inputColumns; j++) {
                        cin >> secondMatrix[i][j];
                }
        }
        //Substraction Part..
        for(i=0; i<inputRows; i++) {
                for(j=0; j<inputColumns; j++) {
                        result[i][j] = secondMatrix[i][j]-firstMatrix[i][j];
                }
        }
        //Difference of entered Matrices :
        cout << "Difference of entered Matrices: "<< endl;
        for(i=0; i<inputRows; i++) {
                for(j=0; j<inputColumns; j++) {
                        cout<< "\t" << result[i][j];
                }
        }

}
int main()
{
        subtract();
}
