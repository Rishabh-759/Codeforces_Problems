/* SOLVED
Problem Link: https://codeforces.com/contest/1320/problem/A
LEARNED CONCEPTS:
    -> VECTOR PAIRS

COMPLEXITY:
    Time Complexity: O(nlogn)
    Space Complexity: O(n)
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    vector<ll> b;
    vector<pair<ll,ll>> a;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        b.push_back(x);
        a.push_back({x-i,x});
    }
    if(n==1){cout<<a[0].second;return 0;}
    ll mx_sum = *max_element(b.begin(),b.end());
    sort(a.begin(),a.end());
    ll curr_sum = 0;
    ll curr_ele = a[0].first;
    for(int i=0;i<n;i++){
        if(a[i].first == curr_ele){
            curr_sum += a[i].second;
        }
        else{
            if(curr_sum > mx_sum){
                mx_sum = curr_sum;
            }
            curr_ele = a[i].first;
            curr_sum = a[i].second;
        }
    }
    if(curr_sum > mx_sum){
        mx_sum = curr_sum;
    }
    cout<<mx_sum;
    return 0;
}