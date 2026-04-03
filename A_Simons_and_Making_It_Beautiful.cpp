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
        int M = 0;
        vi a(n),m(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            M = max(a[i],M);
            m[i] = M;
        }
        int loc = 0;
        for(int i = 0;i<n;i++){
            if(m[i] == i+1){
                loc = i;
                break;
            }
        }
        if(loc == n-1){
            for(int i = 0;i<n;i++){
                cout<<a[i]<<" ";
            }
        }
        else{
            int mx = max_element(a.begin(),a.end()) - a.begin();
            swap(a[loc],a[mx]);
            for(int i = 0;i<n;i++){
                cout<<a[i]<<" ";
            }
        }
        /*cout<<"\n";
        for(int i = 0;i<n;i++){
            cout<<i+1<<" ";
        } */
        cout<<"\n";
    }
    return 0;
}