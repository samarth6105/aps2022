// Author : Ritbik Bharti

#include<bits/stdc++.h>
using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;

#define clr(a,x) memset(a,x,sizeof(a));
#define print1d(mat,n){for(int i=0;i<(int)(n);i++)cout<<mat[i]<<" ";cout<<endl;}
#define print2d(mat,n,m){for(int i=0;i<(int)(n);i++){for(int j=0;j<(m);j++){cout<<mat[i][j]<<" ";}cout<< endl;}}
#define print(v) for(const auto itr:v){ cout << itr << ' ';} cout << endl;
#define pb push_back
#define ff first
#define ss second
#define endl '\n'
#define mod 1e9

double EPS = 1e-9; 
int INF = 1000000005; 
long long INFF = 1000000000000000005LL; 
double PI = acos(-1);

int lcs(string text1, string text2){
	
	//Vector matrix
	int m=text1.length();
    int n=text2.length();
	
    vector<vector<int>> a(m+1,vector<int>(n+1));
	
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(text1[i-1]==text2[j-1]) 
			   a[i][j]=a[i-1][j-1]+1;
            else a[i][j]=max(a[i-1][j], a[i][j-1]);
        }
    }
    return a[m][n];
    
    //Array matrix
    /*
    int m = text2.length();
    int n = text1.length();
    
    int dp[m+1][n+1];
    
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0) dp[i][j]=0;
            else if(text1[j-1]==text2[i-1]) dp[i][j] = 1 + dp[i-1][j-1];
            else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }
    
    return dp[m][n];
    */
}

int main(){
    fastIO

    string s1,s2;
    cin>>s1>>s2;
       
    cout<<lcs(s1,s2)<<endl;

    return 0;
}