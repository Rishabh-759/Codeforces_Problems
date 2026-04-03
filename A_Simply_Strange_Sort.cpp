#include<bits/stdc++.h>
using namespace std;
void function_odd(vector<int>& a){
    for(int i = 0;i<a.size()-1;i+=2){
        if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);
        }
    }
}
void function_even(vector<int>& a){
    for(int i = 1;i<a.size();i+=2){
        if(a[i]>a[i+1]){
            swap(a[i],a[i+1]);
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) {cin>>a[i];}
        vector<int> b = a;
        sort(b.begin(),b.end());
        int k = 0;
        while(a!=b){
            function_odd(a);
            k++;
            if(a==b) break;
            function_even(a);
            k++;
        }
        cout<<k<<"\n";
    }
    return 0;
}