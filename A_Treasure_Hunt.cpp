/* SOLVED
Problem link: https://codeforces.com/contest/817/problem/A */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1,y1,x2,y2,x,y;
    cin>>x1>>y1>>x2>>y2;
    cin>>x>>y;
    if((abs(x2-x1))%x==0 && (abs(y2-y1))%y == 0 &&((((((abs(x2-x1))/x)%2==0)&&((abs(y2-y1))/y)%2==0))||((((abs((x2-x1)/x))%2==1)&&(abs((y2-y1))/y)%2==1)))){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}