#include <iostream>
#include <vector>

using namespace std;

// Function to check if it is possible to obtain a sum of 'target' from the marks list
bool canObtainMarks(vector<int>& marks, int target) {
    vector<bool> dp(target + 1, false);
    dp[0] = true;

    for (int mark : marks) {
        for (int i = target; i >= mark; i--) {
            if (dp[i - mark]) {
                dp[i] = true;
            }
        }
    }

    return dp[target];
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        vector<int> marks(N);
        for (int i = 0; i < N; i++) {
            cin >> marks[i];
        }

        if (canObtainMarks(marks, M)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
