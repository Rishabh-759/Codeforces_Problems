#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s1;
    cin>>s1;
    sort(s1.begin(),s1.end());
    s1.erase(remove(s1.begin(),s1.end(),'+'),s1.end());
    for(int i = 0;i<s1.size();i++){
        if(i>0)
            cout<<"+";
        cout<<s1[i];
    }
    
}