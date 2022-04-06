#incude <iostream>
#include<cmath>
using namespace std;
int countSetBits( int z)
{
     int count = 0;
    while (z) {
        count += z & 1;
        z >>= 1;
    }
    return count;
}
int assignn(*int c,int n)
{
int pn,x;
pn=pow(2,n);
int dp[pn];
for(int i=; i<pn; i++)
{
dp[i]=1000;
}
dp[0]=0;
for(int mask=0; i<pn; i++)
{
x=couunt_bit(mask);
}

}
int main()
{
int n;
int res;
int a[10][10];
scanf("%d",&n);
for(int i=0; i<n; i++)
{
    for(int j=0; j<n; j++)
    {
    scanf("%d",&a[i][j]);
    }
}
res=assignn(&a,n);
}
