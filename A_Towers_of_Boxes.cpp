#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long int>

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n,m,d;
        cin>>n>>m>>d;
        int div = (d/m + 1);
        int ans = (n%div == 0 ? n/div : n/div + 1);
        cout<<ans<<"\n";
    }
    return 0;
}