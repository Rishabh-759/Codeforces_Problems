#include<bits/stdc++.h>
using namespace std;
int main(){
    /*ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> x(n);
        vector<int> y(n);
        for(int i=0;i<m;i++) {cin>>x[i]>>y[i];}
        if(n>m){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }*/
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    vector<int> temp = a;
    int loc = 1;
    temp.erase(temp.begin()+loc);
    set<int> s ={temp.begin(),temp.end()};
    vector<int> temp1(s.begin(),s.end());
    for(int i = 0;i<temp1.size();i++){
        if(temp1[i]!=i){
            cout<<i;
            break;
        }
        else{
            goto end;
        }
    }
    end:
    cout<<temp.size();

    return 0;
}