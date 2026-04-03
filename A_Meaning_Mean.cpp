#include<iostream>
#include<vector>    
#include<cmath>
#include<algorithm> 
using namespace std;

int main()
{
    int cases,max,min,second_max;
    cin>>cases;
    for(int i = 0;i<cases;i++){
        int len;
        cin>>len;
        vector<int> a(len);
        for(int j = 0;j<len;j++)
            cin>>a[j];
        sort(a.begin(),a.end());
        int sum = a[0];
        for(int j = 1;j<len;j++){
                sum=(sum+a[j])/2;
                }
        cout<<sum<<endl;
            }
       
    return 0;
}