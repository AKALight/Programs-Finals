#include <iostream>
#include <string.h>

using namespace std; 
int main(){
	int list[27];
	for(int index = 0; index < 27; index++)
	{
		list[index] = index+27;
	}
	for(int index = 0; index < 27; index++)
	{
		cout<<" "<<list[index];
	}

return 0;
}