/* SOLVED
    Problem link: https://codeforces.com/contest/1659/problem/A
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int temp = n;
        string s(n,0);
        int p = 0;
        while(b>0){
            int st = (int)n/(b+1);
            p+=st+1;
            s[p-1] = 'B';
            n -= (st+1);
            a -= st;
            b--;
        }  
        for(int i = 0;i<temp;i++){
            if(s[i] != 'B'){
                s[i] = 'R';
            }
        }   
        cout<<s<<"\n";
    }
}