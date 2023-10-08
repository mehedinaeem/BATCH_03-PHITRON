def can_obtain_perfect_score(T, test_cases):
    results = []

    for t in range(T):
        N, M, A = test_cases[t]
        dp = [False] * (M + 1)
        dp[0] = True

        for i in range(N):
            for j in range(M, A[i] - 1, -1):
                if dp[j - A[i]]:
                    dp[j] = True

        if dp[M]:
            results.append("YES")
        else:
            results.append("NO")

    return results

# Input
T = int(input())
test_cases = []

for _ in range(T):
    N, M = map(int, input().split())
    A = list(map(int, input().split()))
    test_cases.append((N, M, A))

# Calculate and print the results
results = can_obtain_perfect_score(T, test_cases)
for result in results:
    print(result)
