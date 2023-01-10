#include <iostream>
using namespace std;

int main(){
	int fnum,dnum,n,sum=0;
	
	cout<<"First number: ";
	cin>>fnum;
	cout<<"Difference number: ";
	cin>>dnum;
	cout<<"Nth term: ";
	cin>>n;
	
	int i;
	cout<<""<<fnum;
	for(i = 1; i < n; i++)
	   cout<<" "<<(fnum+=dnum);
	   
	   
	   
}