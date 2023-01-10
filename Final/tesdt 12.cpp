#include <iostream>
using namespace std;

int main(){
	int n,sum=0,c=0;
	cout<<"Enter the nth: ";
	cin>>n;
	
	for(int i=1;i<n;i++){
		c=1;
	    for(int k=0;k<i;k++)
	       cout<<c;
	       sum+=c;
	       
	       if(c<i)
	    	cout<<" + ";
	       else
	       	cout<<" = ";
	       	
	       	
	       c++;
		   
	}
	cout<<endl;
}