//wrong

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, n;
  string s;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n >> s;
    int count = 2;
    unordered_map<char, int> solved;
    for (int j = 0; j < n; j++) {
      if (solved.find(s[j]) == solved.end()) {
        solved[s[j]] = 1;
        count++;
      } else {
        solved[s[j]]++;
      }
    }
    cout << count << endl;
  }
  return 0;
}
