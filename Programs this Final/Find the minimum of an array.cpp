// C++ program to find minimum value and its index
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Driver Code
int main()
{
    int *arr;
    // n is the size of array 
    int n = sizeof(arr) / sizeof(arr[0]);
    //Intialize the value of min and index
    int min = INT_MAX;
    int index = -1;
    arr = new int[n];
    // Iterate the array
    cout<<"Enter the size: ";
    cin>>n;
    for(int i = 0; i < n; i++)
    {
    	cout<<"Enter the numbers: ";
    	cin>>arr[i];
	}
    
    for(int i=0; i < n; i++)
    {
        if(arr[i] < min)
        {
            //If current value is less than min value
            // then replace it with min value
            min = arr[i];
            index = i;
        }
    }
    cout << "Minimum value in given array is ";
    cout << min <<" and its index is "<< index <<endl;
    return 0;
}