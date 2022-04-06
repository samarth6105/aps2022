#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#include <cstring>

using namespace std;
int getmax(int n,int m)
{
    if(n>m)
        return n;
    else
        return m;
}
int main()
{
    int n=10,myax1,myax2;
    int arr[n];
    memset(arr,0, sizeof(arr));
    for(int i=0; i<n; i++)
    {
      if(i%2==0)
      {
      arr[i]=(i/2)*(i/2);
      }
      else
      {
      arr[i]=(i/2)*((i+1)/2);
      }
    }

    for(int k=0; k<n; k++)
    {
        printf("%d ",arr[k]);
    }
    return 0;
}
