n = int(input())
k = int(input())

total_keseluruhan = 0

for i in range(1, n + 1):
    suku = []
    jumlah_baris = 0
    for j in range(i, 0, -1):
        suku.append(f"({j} * {k})")
        jumlah_baris += j * k
    print(" + ".join(suku), "=", jumlah_baris)
    total_keseluruhan += jumlah_baris

print(total_keseluruhan)
