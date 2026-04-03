#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long int>

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
        ll n,k;
        cin >> n >> k;
        ll cnt = 0;
        for (int i = 0; i < n; i++) {
            ll a,b;
            cin>>a>>b;
            if(a*b >= k){cnt++;}
        }
        cout<<cnt<<"\n";
        
    return 0;
}