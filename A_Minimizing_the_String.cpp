
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long int>

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    string a;
    cin>>a;
    bool flag = true;
    for(int i = 0;i<n-1;i++){
        if((a[i]-'a') > (a[i+1]-'a')){
            a.erase(i,1);
            bool flag = false;
            break;
        }
    }
    if(flag){a.erase(n-1,1);}
    cout<<a;
    return 0;
}