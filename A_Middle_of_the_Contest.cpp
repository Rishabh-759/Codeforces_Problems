/* SOLVED
Problem link: https://codeforces.com/problemset/problem/1133/A */

#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1,s2,s(5,'0');
    cin>>s1>>s2;
    int hrs = ((s2[0]-'0')-(s1[0]-'0'))*10 + ((s2[1]-'0')-(s1[1]-'0'));
    int mins =((s2[3]-'0')-(s1[3]-'0'))*10 + ((s2[4]-'0')-(s1[4]-'0'));
    if(hrs < 0){hrs = 24 - hrs;}
        int total_mins = (hrs)*60 + mins;
        int mins_new = ((total_mins%120)/2 + (s1[3]-'0')*10 + (s1[4]-'0'));
        int hrs_new = ((int)total_mins/120 + (s1[0]-'0')*10+(s1[1]-'0') + mins_new/60)%24;
        s[0] = hrs_new/10 + '0';
        s[1] = hrs_new%10 + '0';
        s[2] = ':';
        s[3] = (mins_new%60)/10 + '0';
        s[4] = (mins_new%60)%10 + '0';
        cout<<s;
}