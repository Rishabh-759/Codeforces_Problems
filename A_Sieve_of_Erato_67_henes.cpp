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
        int n;
        cin >> n;
        vi a(n);
        bool flag1 = false,flag2 = false;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == 67){
                flag2 = true;
            }
        }
        cout<<(flag2 ? "YES\n":"NO\n");
    }
    return 0;
}