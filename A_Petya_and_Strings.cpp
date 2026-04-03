#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    if(_stricmp(s1.c_str(),s2.c_str())>0){
        cout<<1;
    }
    if(_stricmp(s1.c_str(),s2.c_str())==0){
        cout<<0;
    }
    if(_stricmp(s1.c_str(),s2.c_str())<0){
        cout<<-1;
    }
}