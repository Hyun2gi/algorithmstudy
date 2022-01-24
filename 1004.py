N = int(input())
for i in range(N):
    x1,y1, x2, y2 = map(int,input().split())
    n = int(input())
    count = 0
    for j in range(n):
        cx, cy, r = map(int,input().split())
        start = (((x1-cx)**2)+((y1-cy)**2))**0.5
        end = (((x2-cx)**2)+((y2-cy)**2))**0.5
        if (start<r and end>r) or (end<r and start>r):
            count+=1
    print(count)