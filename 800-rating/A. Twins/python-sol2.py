import sys

# In Python 2.7, raw_input() is preferred for reading strings
n = int(raw_input())

# map() is a quick way to convert the split strings to integers
coins = map(int, raw_input().split())

total = sum(coins)
coins.sort(reverse=True)

mysum = 0
count = 0

for i in range(n):
    mysum += coins[i]
    count += 1
    # Compare against the actual remaining balance to avoid division issues
    if mysum > (total - mysum):
        break

print count