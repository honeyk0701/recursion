#include<iostream>
using namespace std;
int climbstairs(int n){
    if(n<0)
        return 0;
    if(n==0)
        return 1;
    return climbstairs(n-1)+climbstairs(n-2);
}
int main(){
    int n;
    cin>>n;
    int ans=climbstairs(n);
    cout<<ans<<endl;
    return 0;
}
