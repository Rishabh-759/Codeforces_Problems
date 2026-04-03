#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long int>

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    ll cnt = 0;
    while(n){
        if(n&1 == 1){
            cnt++;
        }
        n/=2;
    }
    cout<<cnt;
    return 0;
}