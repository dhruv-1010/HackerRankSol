#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n,i,k,home=0;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++){
    	cin>>a[i];
	}
	for(i=0;i<n;i++){
		if(a[i]>0){
			if(a[i]>=a[k-1]){
				home++;
			}}}
	cout<<home<<endl;
	
    return 0;
}
