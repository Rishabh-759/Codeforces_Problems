#include<bits/stdc++.h>
using namespace std;
/*long long func(vector<int>& a){
    long long ans = a[0]|a[1] - a[1];
    for(int i = 1;i<(int)a.size()-1;i++){
        ans = ans | a[i+1] - a[i+1];
    }
    return ans;
}
    */
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {cin>>a[i];}
    sort(a.begin(),a.end(),greater<int>());
    for(int i = 0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}