#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

    stringstream ss(s);
    string word;
    bool isFirstWord = true;
    while(ss >> word)
    {
        if (!isFirstWord)
        {
            cout << " ";
        }
        else
        {
            isFirstWord = false;
        }

        for(int i = word.length() - 1; i >= 0; i--)
        {
            cout << word[i];
        }
    }
    
    return 0;
}
