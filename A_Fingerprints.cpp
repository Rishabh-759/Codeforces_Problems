/* SOLVED
Problem link: https://codeforces.com/contest/994/problem/A
Simple implementation problem O(n*m)
 */


#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    for(int j = 0;j<m;j++){
        cin>>b[j];
    }
    vector<int> ans;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(a[i] == b[j]){
                ans.push_back(a[i]);
            }
        }
    }
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}