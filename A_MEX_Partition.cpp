#include<bits/stdc++.h>
using namespace std;
int mex(vector<int> a){
    sort(a.begin(),a.end());
    int mex = 0;
    for(int i = 0;i<a.size();i++){
        if(a[i] == mex){
            mex++;
        }
    }
    return mex;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> a(n);
        for(int i = 0;i<n;i++){cin>>a[i];}
        cout<<mex(a)<<endl;
    }
}