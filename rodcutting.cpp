#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#include <cstring>

using namespace std;
int getmax(int n,int m)
{
    if(n>=m)
        return n;
    else
        return m;
}
int main()
{
    int n=10,myax1,myax2;
    int arr[n];
    memset(arr,0, sizeof(arr));
    for(int i=2; i<=n; i++)
    {
        for(int j=1; j<=i/2; j++)
        {
            myax1=getmax(arr[i],j*(i-j));
            myax2=getmax(j*(i-j),arr[i-j]);
            //printf("%d %d\n",i,j);
            arr[i]=getmax(myax1,myax2);
            for(int k=0; k<n; k++)
            {
             printf("%d ",arr[k]);
            }
        }
        printf("\n");
    }

    for(int k=0; k<n; k++)
    {
        printf("%d ",arr[k]);
    }
    return 0;
}
