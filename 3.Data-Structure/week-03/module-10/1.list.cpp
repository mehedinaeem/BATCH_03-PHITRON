#include<bits/stdc++.h>
using namespace std;

int main()
{
    //list<int>mylist;
    //list<int>list2={1,2,3,4,5};
    //int ar[5]={10,20,30,40,50};
    vector<int>v={10,20,30,40,50};
    //list<int>mylist(5,5); //loop diye acceskora jabe na...iterator use krte hbe
    
    //list<int>mylist(list2);
     list<int>mylist(v.begin(),v.end());
    // for(auto it=mylist.begin();it!=mylist.end();it++)
    // {
    //     cout<<*it<<endl;
    // }

    //range base for loop
    for(int val:mylist)
    {
        cout<<val<<endl;
    }
    return 0;
}