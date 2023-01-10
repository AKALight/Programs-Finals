#include <iostream>
#include <string.h>

using namespace std; 
int main(){
	int list[10] = {8,5,12,23,5,6,7,8,9,1};
	
	for(int index = 0; index < 10; index++)
	{
		list[index]=index+index;
		cout<<" "<<list[index];
	}

return 0;
}