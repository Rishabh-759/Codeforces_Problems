#include<iostream>
#include<string>

using namespace std;

int main(){
    int num_of_cases;
    cin>>num_of_cases;
    for(int i =0; i<num_of_cases;i++){
        int len,len1;
        cin>>len;
        string s,s1,s_vd;
        cin>>s;
        cin>>len1;
        cin>>s1>>s_vd;
        for(int j=0;j<len1;j++)
        {
            if(s_vd[j]=='V')   { 
                s=s1[j]+s;
                len++;}
            else{
                s=s+s1[j];
                len++;}
        }
        cout<<s<<endl;
    }
}