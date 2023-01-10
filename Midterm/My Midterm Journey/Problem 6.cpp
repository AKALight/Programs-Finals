#include <iostream>
using namespace std;
//Make a program that output's the First and Last number.
int main(){
	int n,f,l;
	cout<<"Enter num: ";
	cin>>n;
	f=n%10;//This will be the value for the last digit which is the Last digit
	//Declare the Last number 1st for the while statement will ulter the values for the N value
    while(n>10)//This is the limiter
{

		n=n/10; // This equation will solve for the First Digit
		
		
}
	cout<<"First Digit is: "<<n;//Diplay's The first digit
	cout<<"\nLast Digit is: "<<f;//Display's The Last digit
	return 0;
}
