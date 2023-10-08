#include <bits/stdc++.h>
using namespace std;

void count_me()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    map<string, int> mp;
    map<int, string> mw;

    while (ss >> word)
    {
        mp[word]++;
        if (mp[word] > 1 && mw.find(mp[word] - 1) != mw.end())
        {
            mw.erase(mp[word] - 1);
        }
        if (mw.find(mp[word]) == mw.end())
        {
            mw[mp[word]] = word;
        }
    }

    auto max_it = mw.rbegin();
    cout << max_it->second << " " << max_it->first << endl;
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
