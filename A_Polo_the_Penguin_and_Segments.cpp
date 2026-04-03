/* SOLVED
Problem link: https://codeforces.com/contest/289/problem/A */
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    int sum = 0;
    for(int i =0;i<n;i++){
        int l,r;
        cin>>l>>r;
        sum += (r-l+1);
    }
    cout<<(k-(sum%k))%k;
}