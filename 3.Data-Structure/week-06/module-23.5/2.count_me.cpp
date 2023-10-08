#include <bits/stdc++.h>
using namespace std;

void count_me()
{

    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    map<string, int> mp;
    int max_count = 0;
    string S;
    while (ss >> word)
    {
        mp[word]++;
        if (mp[word] > max_count)
        {
            max_count = mp[word];
            S=word;
        }
        
    }

    cout<<S<<" "<<max_count<<endl;

    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     if (it->second == max_count)
    //     {
    //         cout << it->first << " " << it->second << endl;
    //         break;
    //     }
    // }
    // cout<<max_count->first<<" "<<max_count->second<<endl;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++)
    {
        count_me();
    }
    return 0;
}