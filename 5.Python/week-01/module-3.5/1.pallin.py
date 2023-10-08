# n = int(input())
# pallin = []

# for i in range(n):
#     x = input()
#     pallin.append(x)

# print(pallin)

# # a = list(reversed(pallin))

# if a == pallin:
#     print('YES')
# else:
#     print('NO')


# Read the number of elements
n = int(input())

# Read the array of integers
arr = list(map(int, input().split()))

print(arr)

# Function to check if an array is a palindrome


def is_palindrome(arr):
    return arr == arr[::-1]


is_palindrome(arr)
print(arr)

# Check if the array is a palindrome and print the result
if is_palindrome(arr):
    print("YES")
    print(arr)
else:
    print("NO")
    print(arr)
