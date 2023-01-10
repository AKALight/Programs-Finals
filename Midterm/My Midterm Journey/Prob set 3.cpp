#include <iostream>
using namespace std;

int main(){
	int c,n1,n2,n,sum;
	cout<<"Enter the 1st: ";
	cin>>n1;
	cout<<"Enter the 2st: ";
	cin>>n2;
	cout<<"Enter the Nth: ";
	cin>>n;
	c=0;
	sum=0;
	cout<<n1<<"";
	for(c=1;c<=n;c++)
	{
		sum=n1+n2;
		cout<<sum<<" ";
	}
}
