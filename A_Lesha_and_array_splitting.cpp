/* Problem link: https://codeforces.com/contest/754/problem/A */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long int>

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
        int n;
        cin >> n;
        vi a(n);
        bool all0 = true;
        ll sum = 0;
        int pos = -1;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            if(a[i] != 0){all0 = false;}
        }
        for(int i = 0; i < n; i++){
            if(a[i] != 0){pos = i+1;break;}
        }
        if(all0){cout<<"NO";return 0;}
        if(sum == 0){
            cout<<"YES\n"<<2<<"\n"<<1<<" "<<pos<<"\n"<<pos+1<<" "<<n;
        }
        else{
            cout<<"YES\n"<<1<<"\n"<<1<<" "<<n;
        }
    return 0;
}