#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int binary(int i){
    int bnum,temp,rem;
    bnum=0;
    temp=1;
    rem =1;
    while(i!=0){
        rem = i % 2;
        i = i/2;
        bnum += rem*temp;
        temp *= 10;
    }
    return bnum;    
}
int lengthofint(int n){
    int count=0;
    do{
        n=n/10;
        ++count;
    }while(n!=0);
    return count;
}
int main() {
    int i,j,k,n,len,ellen,z;
    scanf("%d",&n);
    z=n+1;
    int *arr = (int*)malloc(z* sizeof(int));

    len=lengthofint(binary(n));
    for(i=0;i<z;i++){
        arr[i]=binary(i);
    }

    for(j=0;j<z;j++){
        
        ellen=lengthofint(arr[j]);
        for(k=0;k<len-ellen;k++){
        printf(" ");
        }
        printf("%d",arr[j]);
        printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}