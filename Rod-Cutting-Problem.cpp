#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int rodCutting(int sum[], int n) 
{ 
   int val[n+1]; 
   val[0] = 0; 
   int i, j; 
   for (i = 1; i<=n; i++) 
   { 
       int max_value = INT_MIN; 
       for (j = 0; j < i; j++) 
         max_value = max(max_value, sum[j] + val[i-j-1]); 
       val[i] = max_value; 
   } 
  
   return val[n]; 
} 

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    int size = sizeof(arr)/sizeof(arr[0]); 
    cout<<rodCutting(arr, size)<<endl; 
    return 0;
}
