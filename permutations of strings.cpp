#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(char **str,int i,int j);
void rev(char **str,int s,int e);
int next_permutation(int n, char **s)
{
 /**
 * Complete this method
 * Return 0 when there is no next permutation and 1 otherwise
 * Modify array s to its next permutation
 */
    for(int i=n-2;i>-1;i--){
        if(strcmp(s[i+1],s[i])>0){
            for(int j=n-1;j>i;j--){
                if(strcmp(s[j],s[i])>0){
                    //rev(s,i+1,n);
                    swap(s,i,j);
                    rev(s,i+1,n-1);
                    return 1;
                }
            }
        }
    }
    return 0;
}
void swap(char **str,int i,int j){
    char* temp=str[i];
    str[i]=str[j];
    str[j]=temp;
}
void rev(char **str,int s,int e){
    while(s<e){
        swap(str,s++,e--);
    }
}
