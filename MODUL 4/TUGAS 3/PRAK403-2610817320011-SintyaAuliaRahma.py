data = input().split()

if len(data) == 1:
    a = int(data[0])
    b = int(str(a)[::-1])
    hasil = []
    if a <= b:
        for i in range(a, b + 1, 9):
            hasil.append(str(i))
    else:
        for i in range(a, b - 1, -9):
            hasil.append(str(i))
    print("-".join(hasil))
else:
    a = int(data[0])
    b = int(data[1])
    hasil = []
    if a < b:
        for i in range(0, b - a + 1):
            hasil.append(f"{a + i} {b - i}")
    else:
        for i in range(0, a - b + 1):
            hasil.append(f"{a - i} {b + i}")
    print(" - ".join(hasil))
