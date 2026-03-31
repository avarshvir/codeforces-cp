s = input()

target = "hello"
j = 0

for i in range(len(s)):
    if(s[i] == target[j]):
        j=j+1
    if (j == len(target)):
        break
    
if (j == len(target)):
    print("YES")
else:
    print("NO")
    