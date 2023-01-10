#include <iostream>

using namespace std;

int main(){
	int n,sum,i,k,c=0;
	cout<<"Enter the nth: ";
	cin>>n;
	
	for(i=1;i<=n;i++){ //1st loop this one initialize
		sum = 0; //Restarts to zero every time the second loop finishes
		
	   for(k=1;k<=i;k++)//2nd loop this one does the process
	   {  //dont forget this curly brackets 
	   	sum+=k;       //Sum's up the printed values
	   	cout<<k;      //Print's out the values
	    if(k<i)       //Responsible for adding " + " in between
	    cout<<" + ";  // We want to isolate this area for the process
	   }
	cout<<" = "<<sum<<endl;
   }
	  
	return 0;   
}
