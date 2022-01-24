N = int(input())
s = []
s2 = input()
sen = list(s2)
for i in range(N-1):
    s2 = list(input())
    for i in range(len(sen)):
        if sen[i]!=s2[i]:
            sen[i] = "?"

for i in sen:
    print(i,end='')