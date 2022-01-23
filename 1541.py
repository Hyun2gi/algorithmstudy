s=input().split('-')
c=list()
for i in s:
    cnt=0
    s2 = i.split('+')
    for j in s2:
        cnt+=int(j)
    c.append(cnt)
    
n=c[0]

for i in range(1,len(c)):
    n-=c[i]
print(n)