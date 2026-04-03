#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long ans1 = 4*n*n - n - 4;
        long long ans2 = 5*n*n - 5*n - 5;
        if(n==1){
            cout<<1<<"\n";
        }
        else if(n==2){
            cout<<9<<"\n";
        }
        else if(n==3){
            cout<<29<<"\n";
        }
        else{
            cout<<max(ans1,ans2)<<"\n";
        }
    }
    return 0;
}