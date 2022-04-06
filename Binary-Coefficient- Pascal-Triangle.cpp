#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;
//functions

void BC_DP(long n,long k)
{
    long arr[n+1][k+1];
    for(long i = 0;i <= n;i++)
    {
        for(long j = 0;j <= min(i,k);j++)
        {
            if((j == 0) || (i == j))
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
        }
    }
    for(long i = 0;i <= n;i++)
    {
        for(long j = 0;j <= min(i,k);j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

//driver
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int a,b;
    cin >> a >> b;
    BC_DP(a,b);
    return 0;
}
