//include library
#include<iostream>
using namespace std;
//using main function
int main (){
//declaring variables
float length,length1,length2;
//enter value
cout << "Enter length in centimeter: ";
cin >> length;
//calculation
length1 = (length / 100);
length2 = (length / 100000);
//print the result
cout << "length in meter is = " << length1 << endl;
cout << "length in kilometer is = " << length2 << endl;
return 0;
}

