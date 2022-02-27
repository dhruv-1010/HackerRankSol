#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n,i,j,k,test,mini,maxn;
    scanf("%d",&test);
    int *arr = (int *)malloc(n * sizeof(int));
    while(test!=0){
    scanf("%d",&n);
    for(j=0;j<n;j++){
        scanf("%d",&arr[j]);
    }
    maxn=arr[0];
    mini=arr[0];
    for(i=0;i<n;i++){
    if (arr[i] > maxn ) {
        maxn = arr[i];
    }}
    for(k=0;k<n;k++){
        if (arr[k] <  mini) {
            mini = arr[k];
    }}
    printf("%d\n",maxn-mini);
    test--;}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}