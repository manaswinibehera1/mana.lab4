//include library
#include<iostream>
using namespace std;
//using main function
int main (){
//declaring variables
float p,t,r;
float a;
cout << "Enter the value of principal : " << endl;
cin >> p;
cout << "Enter the value of time : " << endl;
cin >> t;
cout << "Enter the value of rate : " << endl;
cin >> r;
//calculation
a = p * (1 + r * t);
//print the results
cout << "Simple interest calculated is " << a << endl;
return 0;
} 
