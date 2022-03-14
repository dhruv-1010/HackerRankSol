#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int size,k,i,count = 0;
	cin>>size>>k;
	int arr[size];
	for	(i = 0;i<size;i++){
		cin>>arr[i];
	}
	//i havent dont anything over the code below and this shows how bad a coder i am and what i am doing ??
	//but honestly i could have done better try hard please it's needed i dont have enought time not anymore
 	for(i=0;i<size;i++){
 		if(5-arr[i]>=k){
 			count++;
		 }
	 }
	 cout<<(int)(count/3)<<endl;
    return 0;
}
