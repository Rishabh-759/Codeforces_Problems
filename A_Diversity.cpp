#include<bits/stdc++.h>
using namespace std;int main(){string s;int n;cin>>s>>n;cout<<(n>s.size()?string("impossible"):to_string(n-set<char>(s.begin(),s.end()).size()));}