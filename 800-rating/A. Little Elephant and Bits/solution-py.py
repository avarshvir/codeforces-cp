n = input()
 
removed = False
 
for i in range(len(n)):
    if n[i] == '0':
        n = n[:i] + n[i+1:]
        removed = True
        break
 
if not removed:
    n = n[:-1]
 
print(n)