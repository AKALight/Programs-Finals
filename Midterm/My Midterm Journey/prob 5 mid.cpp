#include <iostream>
using namespace std;
int main(){
	int i,n,c,sum=0,sum2=0;
	
	cout<<"Enter the number: ";
	cin>>n;

	for(i=1;i<=n;i++) //Initiate's the loop when I = 1
	{
		sum2=0;
		for(c=1;c<=i;c++)
		{
			sum+=c;//Sum's up the value for the sum above
			sum2+=c;//Sum's up the value for the sequence
			cout<<c;//Output's the Count's 
			
			if(c<i)
				cout<<" + "; // This put + in between
			
		}
		cout<<" = "<<sum2<<endl;//Output's The sum of the sequence
	
	}
	cout<<"The Sum above: "<<sum; // sum of all 
}
