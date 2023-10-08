#include <iostream>
using namespace std;

void countWords(string s)
{
    int wordCount = 0;
    int previousChar = ' '; // Assume the previous character is a space

    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] != ' ' && s[i] != '?') && previousChar == ' ')
        {
            wordCount++;
        }

        previousChar = s[i];
    }

    cout << wordCount << endl;
}

int main()
{
    string s;
    getline(cin, s); // Read the entire line including spaces

    countWords(s);

    return 0;
}
