#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int sleep = 0;
        int counter = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == '1'){
                counter = k;
            }
            else{
                counter--;
                if(counter<0){
                    sleep++;
                }
            }
        }
        cout<<sleep<<"\n";
    }
    return 0;
}