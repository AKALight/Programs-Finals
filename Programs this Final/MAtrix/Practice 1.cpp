#include <iostream>
using namespace std;

int main(){
	
	int x,y,row;
	
	cout<<"Enter the rows: "<<endl;
	cin>>row;
	
	//This initiates the printing process of "*"
	for(x = 1; x <= row; x++)//Rows that changes after the increment
	{
		//This part simply print's out the "*" for the first row
		for(y = 1; y <= row; y++)//Columns 
		{
			cout<<"* ";	
		}
		cout<<endl;
	}
}