#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i = 1;i<=4*n;i++){
            for(int j = 1;j<=4*n;j++){
                if(i%j != 0 && j%i != 0 && gcd(i,j) != 1){
                    cout<<i<<" "<<j;
                    return 0;
                }
            }
        }
    }
}