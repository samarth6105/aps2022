// Problem : A Bug's Life
// Contest : SPOJ - Classical
// URL : https://www.spoj.com/problems/BUGLIFE/
// Memory Limit : 1536 MB
// Time Limit : 5000 ms
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

vi ar[2001];
int vis[2001];
int col[2001];

bool dfs(int v, int c){
	
	vis[v] = 1;
	col[v] = c;
	
	for(int child : ar[v])
	{
		if(vis[child] == 0)
		{
			if(dfs(child, c^1)==false)
			return false;
		}
		else
		if(col[v] == col[child])
		return false;
	}
	return true;
}

int main(){
    fastIO

    int t;
    cin>>t;
    for(int p=1;p<=t;p++){
    	int n,m;
    	cin>>n>>m;
    	for(int i=1;i<=n;i++) ar[i].clear() , vis[i]=0;
    	
    	for(int i=1;i<=m;i++){
	    	int a,b;
	    	cin>>a>>b;
	    	ar[a].pb(b);
	    	ar[b].pb(a);
	    }
	    
	    bool flag = true;
	    for(int i=1;i<=n;i++)
	    if(vis[i]==0)
	    {
	    	bool res = dfs(i,0);
	    	if(res==false)
	    	flag = false;
	    }
	    
	    cout<<"Scenario #"<<p<<":\n";
	    if(flag == true)
	    	cout<<"No suspicious bugs found!\n";
	    else
	    	cout<<"Suspicious bugs found!\n";
    }

    return 0;
}