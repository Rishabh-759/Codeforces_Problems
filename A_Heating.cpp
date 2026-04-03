/* SOLVED
Problem link: https://codeforces.com/contest/1260/problem/A */
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll c,s;
        cin>>c>>s;
        ll m = s%c;
        ll d = s/c;
        ll sum = 0;
        for(ll i = 0;i<m;i++){
            sum += (d+1)*(d+1);
        }
        for(ll i = 0;i<c-m;i++){
            sum += d*d;
        }
        cout<<sum<<"\n";
    }
}