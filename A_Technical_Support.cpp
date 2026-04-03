#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<char> a(n);
        for(int i=0;i<n;i++) {cin>>a[i];}
        int median = a[n/2];
        bool flag = true;
        for(int i=0;i<n;i++){
            if(a[i]=='Q'){
                int count_a = count(a.begin()+i,a.end(),'A');
                int count_q = count(a.begin()+i,a.end(),'Q');
                if(count_a < count_q){
                    flag = false;
                    break;
                }   
            }
        }
        cout<<(flag ? "Yes\n" : "No\n");
    }
    return 0;
}