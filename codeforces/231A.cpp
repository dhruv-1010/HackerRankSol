#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int t,count=0;
    cin>>t;
    while(t--){
       int sonya=0,tany=0,petya=0;
       cin>>sonya>>tany>>petya;
       if((sonya+tany+petya)>1)count++;
    }
    cout<<count<<endl;
    return 0;
}
