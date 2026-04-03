#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long int>

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    int div = n/2;
    if((n&1) == 1){
        div = n/2 + 1;
    }
    cout<<(m <= div ? "Yes" : "No");
    return 0;
}