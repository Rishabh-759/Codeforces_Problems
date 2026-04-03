/*  
RRLL
LLRR
L R L R
1 1 1 1 1
1 2 1 1 1
1 2 3 1 1 => for 1;

1 0 -1 0 1 => for 2;
1 0 1 0 1
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<char> a(n-1);
    vector<int> ans(n);
    for(int i=0;i<n-1;i++){cin>>a[i];}
    for(int i=0;i<n;i++){ans[i]=1;}
    for(int i=1;i<n;i++){
        if(a[i-1]=='R'){ans[i] = ans[i-1] + 1;}
        if(a[i-1]=='='){ans[i] = ans[i-1];}
    }
    for(int i = n-2;i>=0;i--){
        if(a[i]=='L'){ans[i] = max(ans[i], ans[i+1] + 1);}
        if(a[i]=='='){ans[i] = ans[i+1];}
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}