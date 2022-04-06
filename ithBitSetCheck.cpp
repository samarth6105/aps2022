#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n>>i;
    if(n & (1<<i))
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    return 0;
}