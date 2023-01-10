#include <iostream>

using namespace std;


int main(){
	
	int *list,num,size,max,Z_counter = 0, O_counter = 0, T_counter = 0;
	
	
	cout<<"Enter the number of elements: ";
	cin>>size;
	list = new int[size];
	for(int i=0; i<size; i++)
	{
	    cout<<"Enter the number: ";
	    cin>>list[i];
	     if(list[i]==0)
	        Z_counter++;
	     else if(list[i]==1)
	        O_counter++;
	     else if(list[i]==2)
	        T_counter++;
    }
    
	for(int c=0; c<Z_counter; c++)
	    cout<<0<<"";
	    
	for(int c=0; c<O_counter; c++)
	    cout<<1<<"";
	    
	for(int c=0; c<T_counter; c++)
	    cout<<2<<"";
	

	
	
	
 
}