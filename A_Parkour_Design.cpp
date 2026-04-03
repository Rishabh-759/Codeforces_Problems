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
        int x,y;
        cin >> x >> y;
        if(x == 0 && y == 0){cout<<"YES\n";continue;}
        if((x+y)%3 == 0 && (x+y)/3>=abs(y)){cout<<"YES\n";}
        else{cout<<"NO\n";}
    }
    return 0;
}