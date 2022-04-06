#include <bits/stdc++.h>

using namespace std;

void insertionSort(int n, int *a) {
 int temp,i,j,k;
    for(j=1;j<n;j++)
        {
        temp=a[j];
        i=j-1;
        while(i>=0&&a[i]>temp)
            {
            a[i+1]=a[i];
            i--;
              for(k=0;k<n;k++)
                  cout<<a[k]<<" ";
             cout<<endl;
        }
        a[i+1]=temp;
       
    }
      for(k=0;k<n;k++)
                  cout<<a[k]<<" ";
}
int main(void) {
    int n;
    cin>>n;
    int a[n], i;
    for(i = 0; i < n; i++) { 
        cin>>a[i]; 
    }

    insertionSort(n,a);
    return 0;
}

