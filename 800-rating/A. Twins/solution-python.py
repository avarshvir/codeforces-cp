n = int(input())

coins = []

for i in range(n):
    coins.append(int(input()))

total = 0
for i in range(n):
    total += coins[i]

coins.sort(reverse=True)

mysum = 0
count = 0

for i in range(n):
    mysum += coins[i]
    count += 1
    if mysum > total / 2:
        break

print(count)