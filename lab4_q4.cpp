//include library
#include<iostream>
using namespace std;
//write the main function
int main (){
//declaring variables
float day,year,week,dayy;
cout << "Enter the number of days : ";
cin >> day;
//calculation
year = day / 365;
cout << "Enter the number of weeks : ";
cin >> week;
dayy = week * 7;
//print the result
cout << "Days in years = " << year << endl;
cout << "Weeks in days = " << dayy << endl;
return 0;
}
