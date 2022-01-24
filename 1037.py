N = int(input())
max=0
li = list(map(int, input().split()))
min = li[0]
for i in li:
    if min>i:
        min = i
    if max<i:
        max = i
result = min*max
print(result)