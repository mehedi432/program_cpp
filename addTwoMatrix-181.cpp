/*
   Task-> Add two Matrix using loop.
   1.Start.
   2.Take input of  Row's && Columns..
   3.Take input of elements of matrix using Loop.
   4.Add two Matrices && keep in result..
   5.Show the result.
   6.Stop.
 */

#include <iostream>
using namespace std;
int inputRows,inputColumns,i,j;
int firstMatrix[10][10],secondMatrix[10][10],result[10][10];

int matrixAdd()
{
        cout << "Enter theno. of rows && Columns:" << endl;
        cin >> inputRows >> inputColumns;
        cout <<"Enter the elements of first Matrix : "<< endl;
        for(i=0; i<inputRows; i++) {
                for(j=0; j<inputColumns; j++) {
                        cin >> firstMatrix[i][j];
                }
        }
        cout << "Enter the second Matrix :" << endl;
        for(i=0; i<inputRows; i++) {
                for(j=0; j<inputColumns; j++) {
                        cin >> secondMatrix[i][j];
                }
        }
        //Addition part of Matrix...
        for(i=0; i<inputRows; i++) {
                for(j=0; j<inputColumns; j++) {
                        result[i][j]=firstMatrix[i][j]+secondMatrix[i][j];
                }
        }
        //printing result
        cout << "Sum of entered Matrices: "<< endl;
        for(i=0; i<inputRows; i++) {
                for(j=0; j<inputColumns; j++) {
                        cout <<"\t "<<result[i][j]<<"\n";
                }
        }


}


int main()
{
        matrixAdd();

}
