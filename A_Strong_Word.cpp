#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long int>

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    int n = s.size();
    cout<<(s[0] == s[n-1] ? "Yes" : "No");
    return 0;
}