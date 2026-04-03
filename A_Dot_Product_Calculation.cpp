#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long int>

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
        ll sum = 0;
        vi a(7),b(7);
        for(int i = 0;i<7;i++){
            cin>>a[i];
        }
        for(int i = 0;i<7;i++){
            cin>>b[i];
        }
        for(int i = 0;i<7;i++){
            sum+= a[i]*b[i];
        }
        cout<<sum;
    return 0;
}