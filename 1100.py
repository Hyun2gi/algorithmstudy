chess = []
for _ in range(8):
    chess.append(list(map(str, list(input()))))

answer = 0
for i in range(8):
    for j in range(8):
        if (i%2==0 and j%2==0) or (i%2==1 and j%2==1):
            if chess[i][j] =="F":
                answer+=1
print(answer)