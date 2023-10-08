#include <iostream>
#include <stack>
#include <string>

using namespace std;

string FinalColors(int n, string colors)
{
    stack<char> st;

    for (int i = 0; i < n; i++)
    {
        char color = colors[i];

        if (st.empty())
        {
            st.push(color);
        }
        else
        {
            char topColor = st.top();
            if ((topColor == 'R' && color == 'B') || (topColor == 'B' && color == 'R'))
            {
                st.pop();
                if (!st.empty() && st.top() == 'P')
                {
                    st.pop();
                }
                else
                {
                    st.push('P');
                }
                continue;
            }
            else if ((topColor == 'R' && color == 'G') || (topColor == 'G' && color == 'R'))
            {
                st.pop();
                if (!st.empty() && st.top() == 'Y')
                {
                    st.pop();
                }
                else
                {
                    st.push('Y');
                }
                continue;
            }
            else if ((topColor == 'B' && color == 'G') || (topColor == 'G' && color == 'B'))
            {
                st.pop();
                if (!st.empty() && st.top() == 'C')
                {
                    st.pop();
                }
                else
                {
                    st.push('C');
                }
                continue;
            }
            else if (topColor == color)
            {
                st.pop();
                continue;
            }

            st.push(color);
        }
    }

    string finalColors;
    while (!st.empty())
    {
        finalColors = st.top() + finalColors;
        st.pop();
    }

    if (finalColors.empty())
    {
        return "";
    }
    return finalColors;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        string colors;
        cin >> colors;

        string fc = FinalColors(n, colors);

        if (fc == "Empty")
        {
            cout << "Empty" << endl;
        }
        else
        {
            cout << fc << endl;
        }
    }

    return 0;
}
