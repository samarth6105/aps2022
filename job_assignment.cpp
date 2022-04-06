#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int count_set_bits(int mask){
int cnt=0;
while(mask){
    mask=mask&(mask-1);
    cnt++;
 }
    return cnt;
}

int main() {
	int x;
	int N=3;
	int cost[N][N]={
	    {3,2,7},
	    {5,1,3},
	    {2,7,2}};
	int p=pow(2,N);
	int dp[p];
    for(int i=0;i<p;i++)
         dp[i]={INT_MAX};
    dp[0]=0;
    for(int mask=0;mask<p;mask++)
    {
        x=count_set_bits(mask);
        for(int j=0;j<N;j++)
        {
            if(!(mask&(1<<j)))
            {
                dp[mask|(1<<j)]=min(dp[mask|(1<<j)],dp[mask]+cost[x][j]);
            }
        }
    }
    for(int i; i<p;i++)
    {
        //cout << dp[i]<<endl;
    }
    cout<<dp[p-1];
	return 0;
}
