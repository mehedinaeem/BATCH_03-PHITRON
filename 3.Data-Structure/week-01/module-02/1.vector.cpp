#include<bits/stdc++.h>
using namespace std;

int main()
{
    //vector<int>v;
    //vector<int>v(5);
    //vector<int>v(5,10);
    //vector<int>v2(10,100);
    //vector<int>v(v2);

    int ar[5]={1,2,3,4,5};
    vector<int>v(ar,ar+5);
    cout<<v.size()<<endl;
    for(int i=0;i<5/*v.size()*/;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}