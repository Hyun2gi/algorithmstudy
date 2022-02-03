S1, S2, S3 = map(int, input().split())
N = S1+S2+S3+2
li = [0 for _ in range(N)]
for i in range(1,S1+1):
    for j in range(1,S2+1):
        for k in range(1,S3+1):
            li[i+j+k]+=1
m = max(li)
ind = li.index(m)
print(ind)