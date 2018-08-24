//include library
#include<iostream>
using namespace std;
//using main function
int main (){
//declaring variables
float sub1,sub2,sub3,sub4,sub5;
float total,total_marks = 500,avg,per;
cout << "Enter the mark of 1st subject : " << endl;
cin >> sub1;
cout << "Enter the mark of 2nd subject : " << endl;
cin >> sub2;
cout << "Enter the mark of 3rd subject : " << endl;
cin >> sub3;
cout << "Enter the mark of 4th subject : " << endl;
cin >> sub4;
cout << "Enter the mark of 5th subject : " << endl;
cin >> sub5;
//calculation
total = sub1 + sub2 +sub3 + sub4 + sub5;
avg = total / 5;
per =  (total / total_marks) * 100;
//print the results
cout << "Total marks secured is  " << total << endl;
cout << "Average mark is " << avg << endl;
cout << "Percentage secured is " << per << endl;
return 0;
} 
