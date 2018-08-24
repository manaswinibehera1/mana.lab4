//include library
#include<iostream>
using namespace std;
//use main function
int main (){
//declaring variables
float b = 1.732;
float area,a;
cout << "Enter the value of side of the equilateral triangle : " << endl;
cin >> a; 
//calculation
area = (b / 4) * a * a;
//print the results
cout << "Area of the eqilateral triangle is " << area << endl;
return 0;
}
