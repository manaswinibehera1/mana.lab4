//include library
#include<iostream>
using namespace std;
//using main function
int main (){
//declaring variables
float base,height,area;
cout << "Calculating the value of area of triangle. " << endl;
cout << "Enter the value of base : ";
cin >> base;
cout << "Enter the value of height : ";
cin >> height;
//calculation
area = 1/2 * (base * height);
//print the results
cout << "Area of the triangle is " << area << endl;
return 1;
} 
