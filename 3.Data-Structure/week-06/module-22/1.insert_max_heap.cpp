#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        int cur_idx=v.size()-1;
        while(cur_idx!=0)
        {
            int par_ind=(cur_idx-1)/2;
            if(v[par_ind]<v[cur_idx])
                swap(v[par_ind],v[cur_idx]);
            else
              break;

            cur_idx=par_ind;
        }
    }

    for(int val:v)  cout<<val<<" ";

    return 0;
}