#include <iostream>
#include <cmath>
#include <algorithm>
#include <array>
#include <bits/stdc++.h>
using namespace std;

int Same(long long int a[],long long int n)
{
   unordered_map<int,int> m;//hash map to store the frequency of every
                             //element

    for(long long int i=0;i<n;i++)
       m[a[i]]++;

    if(m.size()==1)
       return 1;
    else
       return 0;
}

int find_max(long long int *var,long long int var1)
{
    int max=0;
    for(long long int h=0; h<var1; h++)
    {
        if(*var>max){
            max=*var;
        }
        var++;
    }
    cout<<max;
    return max;
}
int main() {
	// your code goes here
	//long long int limit=3*pow(10,4);
	long long int t,n;
	int real_max,tryfind;
	cout<<"enter t"<<endl;
	cin>>t;
	int op=0;
	for(int i=0; i<t; i++)
	{
	    cout<<"enter n"<<endl;
	    cin>> n;
	   // cout<<n<<endl;
	    long long int a[n];
	    for(int j=0; j<n; j++)
	    {
	        cout<<"enter" <<j<<" th element"<<endl;
	        cin>>a[i];
	        //cout<<a[i];
	    }
	    if(n==2)
	    {
	        a[0]=a[0]+a[1];
	        op=1;
	        //cout<<op<<endl;
	    }
	    else if(n>2)
	    {
	        //cout<<n<<endl;
	      tryfind=Same(a,n);
	      cout<<tryfind<<endl;
	      if(tryfind==0)
	      {
	          real_max=find_max(a,n);
	          //cout<<real_max;
             //real_max=max;
             //cout<<real_max;
	          for(long long int b=0; b<n; b++)
	          {
	              if(a[b]+a[b+1]==real_max)
	              {
	              a[b]=real_max;
	              op++;
	              for (long long int u = b+1; u <= n-1; ++u)
	              {
	                  a[u] = a[u + 1]; // copy next element left
	              }
                  n--;
	              }

	          }

	      }
	    }

	    //cout<<op<<endl;



	}
	return 0;
}
