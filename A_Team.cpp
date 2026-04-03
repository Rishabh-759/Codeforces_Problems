#include <iostream>
#include<vector>
using namespace std;

int main(){
    int num_of_prob;
    int attempt=0;
    cin>>num_of_prob;
    vector<vector<int>> problems(num_of_prob,vector<int>(3));
    problems.resize(num_of_prob);
    for(int i=0;i<num_of_prob;i++)
    {
        for(int j=0;j<3;j++)
            {
                cin>>problems[i][j];
            }
    
    }
    for(int i=0;i<num_of_prob;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
            {
                if(problems[i][j]==1)
                {
                    sum++;
                }
            }
        if(sum>=2)
            attempt++;
    }
    cout<<attempt;
}

