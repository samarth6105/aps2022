#include<bits/stdc++.h>
using namespace std;

int main() {
	// start
    int t,n,i,j,c;
    long long int k,m;
    string s,temp="";
    long long int num,modulo=1000000007;
    printf("enter t\n");
    //cin >> t;
    scanf("%d",&t);
    while(t--)//test cases
    {
        //
        //cin >> s;
        printf("enter n m k\n");
        //cin >> n >> k >> m;
        scanf("%d%lld%lld",&n,&k,&m);
        printf("%d%lld%lld",n,k,m);
        printf("enter s\n");
        cin >> s;
        //scanf("%s",&s);
        //printf("%s",s);
        cout<<s;
        for(i=0;i<m;i++)
        {
            for(j=0;j<s.length();j++)
            {

                num=(s[j]-'0')*k;
                ostringstream str1;
                str1 << num;
                string geek = str1.str();
                temp=temp+geek;
            }
            s=temp;
            temp.clear();
        }

        //cout << (s.length()%modulo) << endl;//output
        //printf("%lld\n",(s.length()%modulo));

    }
	return 0;
}
