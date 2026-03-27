n = int(input())
coins = list(map(int, input().split()))

total = sum(coins)

coins.sort(reverse=True)

mysum = 0
count = 0

for coin in coins:
    mysum += coin
    count += 1
    if mysum > total / 2:
        break

print(count)