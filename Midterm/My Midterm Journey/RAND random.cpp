#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{	
	int num,rnum;
	bool guess=0;
	
	srand(time(0));
	rnum=rand()%100;
	while(guess==0)
	{
		
		cout<<"Guess the number: ";
		cin>>num;
		
		if(num==rnum)
		{
			
		cout<<"Jackpot!!";
		break;
		
	    }
	    
		else if(num<rnum)
		cout<<"Higher!!\n";
		
		else
		cout<<"Lower!!\n";
	}
	

	
}
	

