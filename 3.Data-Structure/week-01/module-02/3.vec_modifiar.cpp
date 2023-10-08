#include<bits/stdc++.h>
using namespace std;

int main()
{
    // //vector Assign
    // vector<int>v={1,2,3};
    // vector<int>v2={10,20,30};
    // v=v2;
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }// for that time complexity O(1)

    // vector<int>v={1,2,3};
    // vector<int>v2={10,20,30,40,50};
    // v=v2;
    // for(int i=0;i<v2.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }// for that time complexity O(n)


    //Push back->add a element in right side
    //pop back-> add a element in left side
    vector<int>v={5,10,15};
    v.pop_back();
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }



    return 0;
}