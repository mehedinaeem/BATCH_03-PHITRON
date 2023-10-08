#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>mp;
    mp.insert({"naeem",10});
    mp.insert({"fahim",110});
    mp.insert({"sakib",20});
    mp.insert({"rabbi",111});
    mp.insert({"raju",40});
    mp.insert({"ula",90});


    cout<<mp["naeem"]<<endl;
    cout<<mp["ula"]<<endl<<endl;

    for(auto it=mp.begin(); it!=mp.end();it++)
    {
        //thats not give th routput sequantilly
        cout<<it->first<<" "<<it->second<<endl;
    }

    //ache nki nai
    cout<<endl;
    if(mp.count("naeem"))
        cout<<"Ache"<<endl;
    else
        cout<<"Nai"<<endl;

    map<string,int>mp1;

    mp1["jony"]=10;
    mp1["rony"]=20;
    mp1["pony"]=30;
    mp1["mony"]=40;
    mp1["labony"]=50;

    cout<<mp1["jony"]<<endl<<endl;

    for(auto it=mp1.begin();it!=mp1.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }



    return 0;
}