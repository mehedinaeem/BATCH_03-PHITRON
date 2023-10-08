MOD = 10**9 + 7

def max_ways(N, M, A):
    dp = [0] * (M + 1)
    dp[0] = 1

    for mark in A:
        for i in range(mark, M + 1):
            dp[i] = (dp[i] + dp[i - mark]) % MOD

    return dp[M]

T = int(input())
for _ in range(T):
    N, M = map(int, input().split())
    A = list(map(int, input().split()))
    result = max_ways(N, M, A)
    print(result)
