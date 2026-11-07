kelipatan = int(input())
simbol = input()

for i in range(1, 51):
    if i % kelipatan == 0:
        print(simbol, end=" ")
    else:
        print(i, end=" ")
