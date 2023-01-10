
#include <iostream>
using namespace std;

int main(){
	int num,c,zero,odd,even;
	even=0;
	odd=0;
	c=1;
	zero=0;
 	for(c>0;c<=20;c++)
{
 	cout<<c<<". "<<"Enter the #: ";
	cin>>num;
    if(num%2==0)
    	even++;
    {
	    if(num<=0)
	    {
	    zero++; 
		}
		else if(num%2==1)
		odd++;
    }
	   	
}
	
	
	cout<<"\nOdd: "<<odd;
	cout<<"\nEven are: "<<even;
	cout<<"\nZero are: "<<zero;

 }
    

