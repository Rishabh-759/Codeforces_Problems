#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int b=0;
    vector<int> a;
    for(int i = 0 ;i <n;i++){
        int an;
        cin>>an;
        a.push_back(an);
      }
    
    for(int i = 0 ;i <n;i++){
     if (a[i]>=a[k-1] && a[i]>0)
        b++;
      }
      cout<<b;
    }