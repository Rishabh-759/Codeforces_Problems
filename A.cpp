#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;    
void sort2d(vector<vector<int>> &c,int &relations){
    for(int i = 0;i<relations;i++){
        if(c[i][0]>c[i][1])
            swap(c[i][0],c[i][1]);
        }
    }

int main()
{
    int count=0;
    int num_of_ppl,relations;
    cin>>num_of_ppl>>relations;
    vector<vector<int>> c(relations,vector<int>(2));
    for(int i = 0;i<relations-2;i++)
        cin>>c[i][0]>>c[i][1];
    //if(a,b exists and b,c exists then a,c exists) should exist
    //sort 2d vector
    sort2d(c,relations);
    sort(c.begin(),c.end());

    for(int i = 0;i<relations;i++){
        if(c[i][0]==c[i+1][0]){
            if(c[i][1]==c[i+2][0] && c[i+1][1] == c[i+2][1])
                continue;
            else
                count++;
        }
    }
        if(count>0)
            cout<<"NO";
        else
            cout<<"YES";
}