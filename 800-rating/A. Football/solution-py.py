n = input()

count_zeros = 0
count_ones = 0

for i in range(len(n)):
    if (n[i] == '0'):
        count_zeros = count_zeros + 1
        count_ones = 0
        
    elif (n[i] == '1'):
        count_ones = count_ones + 1
        count_zeros = 0
        
    if (count_zeros >= 7 or count_ones >= 7):
        print("YES")
        exit()
    
print("NO")
        