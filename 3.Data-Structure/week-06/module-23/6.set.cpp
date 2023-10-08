// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     set<int>s;
//     for(int i=0;i<5;i++)
//     {
//         int x;
//         cin>>x;
//         s.insert(x);
//     }

//    for(auto it=s.begin();it!=s.end();it++)
//    {
//     cout<<*it<<" ";
//    }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int,greater<int>>s;
    for(int i=0;i<5;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }

   for(auto it=s.begin();it!=s.end();it++)
   {
    cout<<*it<<" ";
   }
    return 0;
}