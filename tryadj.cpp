#include <iostream>
#include <cmath>
#include <algorithm>
#include <array>
#include<bits/stdc++.h>
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

int find_max(long long int a[],long long int var1)
{
    int maxx=0;
    for(long long int h=0; h<var1; h++)
    {
        if(a[h]>maxx){
            maxx=a[h];
        }
    }
    //cout<<max;
    return maxx;
}

int main()
{
    long long int n,t;
    long long int a[1000];
    int tryfind,maxxx;
    int op=0;
    cout<<"enter test cases"<<endl;
    cin>>t;
    while(t--)
    {
    cout<<"enter array size"<<endl;
    cin>>n;
    for(long long int i=0; i<n; i++)
    {
        cout<<"enter elemrnt"<<i<<endl;
        cin>>a[i];
    }
    if(n==2)
    {
        op=1;
    }
    //tryfind=Same(a,n)
    else if(n>2 && !Same(a,n))
    {
       maxxx=find_max(a,n);
    }
    }
	 return 0;
}
