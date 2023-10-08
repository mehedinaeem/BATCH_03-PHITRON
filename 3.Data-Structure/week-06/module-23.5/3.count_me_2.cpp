#include<bits/stdc++.h>
using namespace std;

void count()
{
    int n;
    cin >> n;
    vector<int> v;
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<int, int> mp;
    int max_count = 0;
    int z = 0;

    for (int x : v)
    {
        mp[x]++;
        if (mp[x] > max_count)
        {
            max_count = mp[x];
            z = x;
        }
    }
    int m = 0;
    vector<int>v1;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second == max_count)
           {
            v1.push_back(it->first);
            m++;
           }
    }
    sort(v1.begin(),v1.end());
    if (m > 1)
        cout << v1.back() << " " << max_count<<endl;
    else
        cout << z << " " << max_count << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        count();
    }
    return 0;
}
