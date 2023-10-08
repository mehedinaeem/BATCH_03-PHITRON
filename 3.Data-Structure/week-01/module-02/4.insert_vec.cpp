#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={1,2,3,4,5};
     v.insert(v.begin()+2,100);
    // v.insert(v.end()-1,100);
    // vector<int>v1={10,20,30};
    // v.insert(v.begin()+1,v1.begin(),v1.end());

    // v.erase(v.begin()+0);
    // v.erase(v.end()-1);

    //v.erase(v.begin()+1,v.end());
   // 
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}