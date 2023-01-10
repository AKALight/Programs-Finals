#include <iostream>
using namespace std;
int main(){
	float *list,sum,ave;
	int size;
	
	cout<<"Enter the number of students: ";
	cin>>size;
	cout<<endl;
	
	
	for(int i = 0; i<size; i++){
	
	   cout<<"Ente the scores: "<<i+1<<": ";
	   cin>>list[i];
	   sum += list[i];
   }
      
   ave = sum / size;
   cout<<ave<<" ";
   return 0;
}