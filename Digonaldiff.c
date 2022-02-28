#include <stdio.h>
int main(){
    int i,n,j,dsum=0,adsum=0;
    int arr[100][100];
    scanf("%d",&n);
    for(i = 0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    //main code
        for(i = 0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                dsum += arr[i][j];
            };
            if((i+j)==n-1){
                adsum+=arr[i][j];
            }
        }
    }
    if(dsum>=adsum)printf("%d",dsum-adsum);
    else printf("%d",adsum-dsum);
    return 0;
}
