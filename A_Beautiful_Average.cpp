#include<bits/stdc++.h>
using namespace std;
int sum(vector<int> a,int l,int r){
    int sum =0;
    for(int i = l-1;i<r;i++){
        sum = sum + a[i];
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        int max = 0;
        for(int i =0;i<n;i++){
            for(int j = i;j<n;j++){
                if(sum(a,i+1,j+1)/(j-i+1) > max){
                    max = sum(a,i+1,j+1)/(j-i+1);
                }
            }
        }
        cout<<max<<endl;
    }
}