a,b = input().split()
result = []

for i in range(len(b)-len(a)+1):
    re=0
    for j in range(len(a)):
        if a[j]!=b[j+i]:
            re+=1
    result.append(re)

rere = min(result)
print(rere)