//include library
#include<iostream>
using namespace std;
//write the main function
int main (){
//declaring variables
float angle1,angle2,angle3;
cout << "Enter the value of 1st angle : ";
cin >> angle1;
cout << "Enter the value of 2nd angle : ";
cin >> angle2;
//calculation
angle3 = 180 - (angle1 + angle2);
//print the result
cout << "The value of 3rd angle is " << angle3 << endl;
return 0;
}
