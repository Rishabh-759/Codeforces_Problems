/*
Problem link: https://codeforces.com/contest/145/problem/A 
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long int>

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a,b;
    cin>>a>>b;
    ll cnt_4 = 0, cnt_7 = 0;
    for(int i = 0 ;i < a.size();i++){
        if(a[i] == '7' && a[i] != b[i]){
            cnt_7++;
        }
        if(a[i] == '4' && a[i] != b[i]){
            cnt_4++;
        }
    }
    ll ans = abs(cnt_7 - cnt_4) + min(cnt_7,cnt_4);
    cout<<ans;
    return 0;
}