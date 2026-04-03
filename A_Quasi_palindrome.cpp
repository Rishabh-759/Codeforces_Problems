#include<bits/stdc++.h>
using namespace std;
int palindrome(long int &a)
{
    long int temp = 0;
    while(a>0)
    {
        temp = temp*10 + a%10;
        a = a/10;
    }
    return temp;
}
int main(){
    long int a;
    cin>>a;
    int b = a;
    while(b%10 == 0){
        b=b/10;
    }
    if(palindrome(a) == b)
        cout<<"YES";
    else
        cout<<"NO";

}