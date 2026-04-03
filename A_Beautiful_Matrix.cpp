/* SOLVED
Problem link: https://codeforces.com/contest/263/problem/A */
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a[5][5];
    int x,y;
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            cin>>a[i][j];
            if(a[i][j] == 1){
                x = i;
                y = j;
            }
        }
    }
    cout<<abs(x-2)+abs(y-2);
}