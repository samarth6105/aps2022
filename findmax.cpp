#include <iostream>
#include <cmath>
#include <algorithm>
#include <array>
#include <bits/stdc++.h>
using namespace std;

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
    //cout<<max;
    return max;
}

int main()
{
long long int n=5;
long long int a[5]={3,6,5,4,9};
int real_max;
real_max=find_max(a,n);
cout<<real_max;
return 0;
}
