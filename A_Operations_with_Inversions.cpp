/* SOLVED
Problem link:
Learned concepts:
->2 pointer method
 */



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
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int i = 0,j = 1;
        int cnt = 0;
        while(j < n){
            if(a[i] > a[j]){
                cnt++;
                j++;
            }
            else{
                i = j;
                j = i + 1;
            }
        }
        cout<<cnt<<"\n";
    }
}