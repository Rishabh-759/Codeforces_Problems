#include<iostream>

using namespace std;

int main(){
    int bobw,limakw;
    cin>>limakw>>bobw;
    int years=0;
    for(years=0;limakw<=bobw;years++)
        {
            limakw=limakw*3;
            bobw=bobw*2;
        }
        cout<<years;
}
//limakw*3^y>bobw*2^y