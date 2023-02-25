import math
a,b,c = map(int,input().split())
aa = a**2/(b**2+c**2)
answer = math.sqrt(aa)
height = int(b*answer)
width = int(c*answer)
print(height, width)