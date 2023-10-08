#include<bits/stdc++.h>
using namespace std;

void count()
{
    string s;
    cin>>s;

     int count[26] = {0};

    // Count the occurrence of each character
    for (int i = 0; i < s.length(); i++)
    {
        int val = s[i] - 'a';
        count[val]++;
    }

    // Print the count of each character in lexicographic order
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
           // printf("%c : %d\n", i + 'a', count[i]);
           cout<<char(i+'a')<<" : "<<count[i]<<endl;
        }
    }

}

int main()
{
    count();
    return 0;
}