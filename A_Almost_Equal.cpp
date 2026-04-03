#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(2*n);
    for(int i =0;i<n;i++){
        if(i%2 == 0){
            a[i] = 2*i+1;
            a[2*n-1-i] = 2*n-2*i;
        }
        else
        {
            a[2*n-i-1] = 2*i+1;
            a[i] = 2*n-2*i;
        }
    }
    int sum1 = 0, sum2 = 0;
    for(int i = 0;i<n;i++){
        sum1 = sum1 + a[i];
        sum2 = sum2 + a[2*n-i-1];
    }
    if(abs(sum2 - sum1)==0 || abs(sum2 - sum1)==1 ){
        cout<<"YES"<<endl;
        for(int i = 0;i<2*n;i++){
            cout<<a[i]<<" ";
        }
    }
    else{
        cout<<"NO";
    }
}