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
        vi a(n),b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        bool flag = true;
        for(int i = 0; i < n-1; i++){
            if((b[i] > b[i+1] + 1 && a[i] != b[i]) ||(a[i] > b[i])){
                flag = false;
                break;
            }
        }
        if((b[n-1] > b[0] + 1 && a[n-1] != b[n-1])|| a[n-1] > b[n-1]){
            flag = false;
        }
        cout<<(flag ? "YES":"NO")<<"\n";
    }
    return 0;
}
/* 
5 5 4 2 5 
4 4 4 2 4


*/