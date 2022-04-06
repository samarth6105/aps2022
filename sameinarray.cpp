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

int main()
{
int ret;
long long int a[3]={3,3,3};
ret=Same(a,3);
cout<<ret<<endl;
}
