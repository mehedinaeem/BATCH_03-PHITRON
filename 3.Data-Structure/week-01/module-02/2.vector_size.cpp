#include<bits/stdc++.h>
using namespace std;

int main()
{
    //vector<int>v;
    // cout<<v.size()<<endl;
    // v.push_back(1);
    // cout<<v.size()<<endl;
    // v.push_back(2);
    // cout<<v.size()<<endl;
    // v.push_back(1);
    // cout<<v.size()<<endl;
    // v.push_back(1);
    // cout<<v.size()<<endl;
    // v.push_back(1);
    // cout<<v.size()<<endl;

    //cout<<v.size()<<endl;
    // v.push_back(1);
    // //cout<<v.capacity()<<endl;
    //  v.push_back(2);
    // //cout<<v.capacity()<<endl;
    //  v.push_back(1);
    // // cout<<v.capacity()<<endl;
    // v.push_back(1);
    // //cout<<v.capacity()<<endl;
    //  v.push_back(1);
    // // cout<<v.capacity()<<endl;


    //  //v.clear();
    //  cout<<v.size()<<endl;
    //  //its clear the vector but not from memory
     //cout<<v[1];

     //cout<<v.empty()<<endl;//if empty->1 else 0

    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }



    //Resize
    vector<int>v(5,10);
    v.resize(2);
    v.resize(10,1);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}