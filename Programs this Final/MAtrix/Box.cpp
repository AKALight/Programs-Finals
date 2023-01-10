#include <iostream>

using namespace std;

int main(){
	int size,x,y;
	
	cout<<"Enter the size: ";
	cin>>size;
	int c;
	for(x = 0; x != size; x++)
	{
		for(y = 0; y != size; y++)
		{
			// X is responsible for the x horizontal print of "*"
			// While Y is for the horizontal part
			
			if(x == 0 || x == size - 1 || y == 0 || y == size -1)
			{
				cout<<"#";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	
	}
	
}