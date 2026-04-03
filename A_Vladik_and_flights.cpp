#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long int>

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,a,b;
    cin>>n>>a>>b;
    a--;
    b--;
    string s;
    cin>>s;
    if(s[a] == s[b]){
        cout<<0;
    }
    else{       
        int cnt1 = 0;
        for(int i = b;i > a;i--){
            if(s[i] == s[a]){break;}
                cnt1++;
        } 
        int cnt2 = 0;
        for(int i = b;i < n;i++){
            if(s[i] == s[a]){break;}
                cnt2++;
        } 
        cout<<min(cnt2,cnt1);
    }
    return 0;
}