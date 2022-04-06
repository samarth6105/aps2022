#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	int arr[10]={4,11,2,1,15,3,8,9,6,7};
	int *ptr=arr;
	int max=-99999,min=100000;
	for(int i=0;i<10;i++)
	{
	    if(max<*ptr)
	    {
	        max=*ptr;
	    }
	    if(*ptr<min)
	    {
	        min=*ptr;
	    }
	    ptr++;
	}
	
	cout<<max<<" "<<min;
	return 0;
} 

