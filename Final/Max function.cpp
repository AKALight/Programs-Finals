#include <iostream>
using namespace std;
int main(){
	
	int *list,arra,size;
	int zero=0,one=0,two=0; 
	cout<<"Enter the number of students: ";
	cin>>size;
	cout<<endl;
	
	list = new int[size];
	
	for(int i = 0; i<size; i++){
	
	   cout<<"Ente the scores: "<<i+1<<": ";
	   cin>>list[i];
	   if(list[i]==0)
	     zero++;
	   else if(list[i]==1)
	     one++;
	   else
	     two++;
   }
   	for(int c = 0; c<zero; c++){
	   
       cout<<0<<" ";
    }
    for(int c = 0; c<one; c++)
       cout<<1<<" ";
       
    for(int c = 0; c<two; c++)
       cout<<2<<" "; 
	     
   return 0;
}