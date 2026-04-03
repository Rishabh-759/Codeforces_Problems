#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long int>

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s,s1,s2;
    cin>>s>>s1>>s2;
    if(s2[0] == 'w'){
        if(s[0] == '5' || s[0] == '6'){cout<<53;}
        else{cout<<52;}
    }
    else{
        int day;
        if(s.size() == 2){
            day = (s[0] - '0')*10 + (s[1] - '0');
        }
        else{
            day = (s[0] - '0'); 
        }
        if(day <= 29){cout<<12;}
        else if(day == 30){
            cout<<11;
        }
        else{
            cout<<7;
        }
    }
    return 0;
}