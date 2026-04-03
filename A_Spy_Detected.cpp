#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> a(n);
        for(int i =0;i<n;i++)
            cin>>a[i];
        int same_ele,loc;
        for(int i = 1;i<n;i++){
            if(a[i] == a[i-1]){
                same_ele = a[i];
                break;}
        }
        for(int i = 0;i<n;i++){
            if(a[i] != same_ele){
                loc = i;
                break;}
        }
        cout<<loc+1<<endl;
    }
}