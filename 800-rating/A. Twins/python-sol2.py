n = int(input())

coins = []

# Read all coins from one line, split by spaces
coins_input = input().split()  # this gives a list of strings

for coin in coins_input:
    coins.append(int(coin))  # convert each to int and append

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