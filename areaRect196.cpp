/*
   Task-> Area of Rectangle.
   1.Start
   2.Take input length and width
   3.Calculate Area (area = length * width)
   4.Print Area
 */
 
 #include <iostream>
using namespace std;

double totalArea(float length, float width){
        double area;
        return(length*width);
}

int main(){
        double length,width,area;
        cout << "Enter Length && Width to calculate Area :\n";
        cin >> length >> width;
        area = totalArea(length,width);
        cout << "Total Area of Rectangle is : " << area;
        return 0;
}
