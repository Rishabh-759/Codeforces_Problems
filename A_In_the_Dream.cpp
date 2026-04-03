#include<bits/stdc++.h>
using namespace std;
int main(){
    int cases;
    cin>>cases;
    while (cases--)
    {
        int a,b,c,d;;
        cin>>a>>b>>c>>d;
            if (b > 2*a  + 2 && b>a)
            {
                cout<<"NO"<<endl;
            }
            else if (a > 2*b + 2 && a>b)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                if((c-a)>(d-b) && (c-a)>2*(d-b)+2)
                    cout<<"NO"<<endl;
                else if((d-b)>(c-a) && (d-b)>2*(c-a)+2)
                    cout<<"NO"<<endl;
                else
                    cout<<"YES"<<endl;
            }
        
     }

    return 0;
}