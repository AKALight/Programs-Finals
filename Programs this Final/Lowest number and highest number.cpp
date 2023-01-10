#include <iostream>
using namespace std;

int main(){
	int num[5] = {5,2,3,4,1};
	int lownum = 0;
	
	for(int i = 0; i < 5; i++)
	{
		if(num[i] < lownum)
		{
			lownum = num[i];
		}
	}
	cout<<lownum;
}