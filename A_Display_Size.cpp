/*
SOLVED
Problem link: https://codeforces.com/contest/747/problem/A 
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i =(int)sqrt(n);i<=n;i++){
        if(n%i == 0){
            if(n/i > i){
                cout<<i<<" "<<n/i;
                break;
            }
            else{
                cout<<n/i<<" "<<i;
                break;
            }
        }
    }
}