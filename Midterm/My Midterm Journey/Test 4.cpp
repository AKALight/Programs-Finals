#include <iostream>
using namespace std;

int main(){
	int n,f,l,i;
	cout<<"Enter num: ";
	cin>>n;
	f=n%10;
	while(n>0)
{

		n=n/10;
		l++;
		
}
	cout<<"First Digit is: "<<l;
	cout<<"\nLast Digit is: "<<f;
	return 0;
}
