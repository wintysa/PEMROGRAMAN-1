n = int(input())

for i in range(1, n + 1):
    if i % 2 == 1:
        print(i, end=" ")
print()

for i in range(n, 0, -1):
    if i % 2 == 0:
        print(i, end=" ")
print()
