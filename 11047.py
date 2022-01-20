N,K = map(int,input().split())
listt = list()
for i in range(N):
    listt.append(int(input()))

count=0
for i in reversed(range(N)):
    count += K//listt[i]
    K = K%listt[i]

print(count)