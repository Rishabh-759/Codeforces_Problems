#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) {cin>>a[i];}
    int m = *max_element(a.begin(),a.end());
        while(n--){
            if(a[0]==m){
                x:
                m = *max_element(a.begin(),a.end());
                cout<<*max_element(a.begin(),a.end()-1)<<" ";
                a.erase(a.begin());
            }
            else{
                if(a.size()<=1){
                    cout<<a[0]<<" ";
                    break;
                }
                else{
                    cout<<"\n";
                    swap(a[0],a[1]);
                    a.erase(a.begin());
                    cout<<"\n";
                    goto x;
                }
            }

    }
    return 0;
}