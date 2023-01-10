#include <iostream>
using namespace std;

int main()
{
	int num,num2,n,c,sum;
	cout<<"Enter ther 1st #: ";
	cin>>num;
	cout<<"Enter the 2nd #: ";
	cin>>num2;
	cout<<"Enter the Nth: ";
	cin>>n;
    c=2;
    
    cout<<num<<" "<<num2<<" ";
	for(c>2;c<=n;c++)
	{
	sum=num+num2;
	num=num2;
	num2=sum;
	cout<<sum<<" ";	
}
}
