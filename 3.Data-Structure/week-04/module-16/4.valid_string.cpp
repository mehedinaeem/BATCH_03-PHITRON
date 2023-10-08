#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        stack<string> st;
        int count = 0, flag = 0;

        string s;
        cin >> s;
        st.push(s);

        for(char c:s)
        {
            if(c=='A')
               count++;
            else
               flag++;
        }

        //cout<<count<<" "<<flag<<endl;

        if (count == flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
