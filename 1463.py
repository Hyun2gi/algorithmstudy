n = int(input())
count=0
while n!=1:
    if n%3==0:
        count+=1
        n/=3
        continue
    elif n%2==0:
        count+=1
        n/=2
    else :
        count+=1
        n-=1
print(count)