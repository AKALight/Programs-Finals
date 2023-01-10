//Triangle
#include<iostream>

using namespace std;

int main(){
	int n,x,y,c;
	
	cout<<"Enter the rows: ";
	cin>>n;
	
	for(x = 1; x <= n; x++)//initiates the driver codes
	{
		//this makes the columns, then arranges it.
		for(y = 1; y <= 2*n - 1; y++)
		{
			if(y >= n-(x-1) && y <= n+(x-1))
			{
				cout<<""<<c;
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
