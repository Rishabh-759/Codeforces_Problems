#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio;
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int k,a,b,x,y,count = 0;
        cin>>k>>a>>b>>x>>y;
        if(x>y){
            count = count + (int)(k-b)/y;
            k = ((int)(k-b)/y)*y;
            count = count + (int)(k-a)/x;
        }
        else if(y>=x){
            count = count + (int)(k-a)/x;
            k=((int)(k-a)/x)*x;
            count = count + (int)(k-b)/y;
        }
        cout<<count<<"\n";
    }
}