#include<bits/stdc++.h>
using namespace std;
int main(){

        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> ans;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            {
                for(int j = 0;j<n;j++)
                    {
                        auto loc = find(a.begin(),a.end(),a[i]+a[j]);
                        if(loc!=a.end() && i!=j)
                            {
                                ans.push_back(loc - a.begin()+1);
                                ans.push_back(j+1);
                                ans.push_back(i+1);
                                goto end;
                            }
                        else
                            ans.push_back(-1);
                    }
            }
        end:
        ans.erase(remove(ans.begin(), ans.end(), -1), ans.end());
        if(ans.empty())
            cout<<-1;
        else{
            for(int i=0;i<ans.size();i++)
            cout<<ans[i]<<" ";
        }

    return 0;
}
//3 5 6 8