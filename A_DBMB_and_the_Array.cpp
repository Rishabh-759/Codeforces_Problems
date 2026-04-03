#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,s,x;
        cin>>n>>s>>x;
        vector<int> a(n);
        int sum = 0;
        for(int i =0;i<n;i++){cin>>a[i];
        sum += a[i];}
        if((s-sum)%x == 0 && (s-sum) >= 0){cout<<"YES\n";}
        else{cout<<"NO\n";}
    }
}