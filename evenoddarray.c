#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,n,j,k;
    scanf("%d",&n);
    int *arr = (int*)malloc(n * sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++){
        if(arr[j]%2==0){
            arr[j]=0;
        }
        else if(arr[j]%2==1){
            arr[j]=1;
        }
    }
    for(k=0;k<n;k++){
        printf("%d ",arr[k]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
