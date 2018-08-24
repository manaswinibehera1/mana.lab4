//using library
#include<iostream>
using namespace std;
//use main function
int main (){
//declaring variables
float celsius,fahrenheit;
//enter values
cout << "Enter temperature in degree celsius = ";
cin >> celsius;
//calculation
fahrenheit = celsius*(9/5) + 32;
cout << "Temperature in fahrenheit is =" << fahrenheit << endl;
return 0;
}
