#include<iostream>
#include <vector>
using namespace std;

int main(){
    int num_of_cases;
    cin>>num_of_cases;
    for(int i =0; i<num_of_cases;i++){
        int n;
        cin>>n;
        vector<int> a;
        vector<int> b;
        int count=1;
        for(int j = 0; j<n;j++)
        {
            int a1;
            cin>>a1;
            a.push_back(a1);
        }
        for(int j = 0; j<n;j++)
        {
            int b1;
            cin>>b1;
            b.push_back(b1);
        }
        for(int j = 0;j<n;j++)
        {
            while (a[j]>b[j]){
                a[j]--;
                count++;
            }
            if(a[j]<b[j])
                a[j]++;
        }
        cout<<count<<endl;
    }
}