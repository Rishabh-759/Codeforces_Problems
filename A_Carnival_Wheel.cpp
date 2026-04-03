/* SOLVED 
Problem link: https://codeforces.com/contest/2180/problem/A*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int l,a,b,x=1;
        cin>>l>>a>>b;
        int mx  = a;
        while(true){
            int n = (a+b*x)%l;
            if(n>mx){mx=n;}
            if(n==a){break;}
            x++;
        }
        cout<<mx<<"\n";
    }
}