#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
        ll c1,c2,c3,c4,c5;
        cin>>c1>>c2>>c3>>c4>>c5;
        ll s = c1+c2+c3+c4+c5;
        if(s%5 == 0 && s != 0){
            cout<<s/5;
        }
        else{
            cout<<-1;
        }
}