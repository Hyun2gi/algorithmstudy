a = int(input())
b = input()
COUNT = 0
for i in range(a):
    if b[i]=='L':
        COUNT+=1

c = a+1-(COUNT//2)

print(min(c,a))