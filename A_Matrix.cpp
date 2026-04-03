#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long int>

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
        ll a;
        cin >> a;
        string s;
        cin>>s;
        int n = s.size();
        vector<vector<int>> pref(n,vector<int>(n+1,0));
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
            pref[i][j+1] = (s[i]-'0')*(s[j] - '0') + pref[i][j];
        }
    }
/*          for(int i = 0;i<n;i++){
            for(int j = 0;j<n+1;j++){
            cout<<pref[i][j]<<" ";
        }
        cout<<"\n"; 
    } */
    vector<int> rec_size;
    for(int i = 0;i<n;i++){
        int l = 0, r = 1;
        while(r < n + 1){
            if(pref[i][r] - pref[i][l] == a){
                r++;
                rec_size.push_back(r - l - 1);
            }
            else if(pref[i][r] - pref[i][l] > a){
                l++;
            }
            else{
                r++;
            }
        }
    }
        ll cnt = 0;
        for(int i = 0;i<rec_size.size();i++){
            if(rec_size[i] != 1){
                cnt+=2;
            }
            else{
                cnt++;
            }
        }
/*         for(int i = 0;i<rec_size.size();i++){
            cout<<rec_size[i]<<" ";
        } */
        cout<<cnt;
    return 0;
}