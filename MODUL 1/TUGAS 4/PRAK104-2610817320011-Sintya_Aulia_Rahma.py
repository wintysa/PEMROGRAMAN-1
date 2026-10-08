harga_a = 400000
harga_b = 350000
diskon_a = 13
diskon_b = 21

akhir_a = harga_a - harga_a * diskon_a / 100
akhir_b = harga_b - harga_b * diskon_b / 100

print("Harga sepatu A adalah %d" % harga_a)
print("Harga sepatu B adalah %d" % harga_b)
print("Sepatu A mendapat diskon %d%% sehingga harganya menjadi %d" % (diskon_a, akhir_a))
print("Sepatu A mendapat diskon %d%% sehingga harganya menjadi %d" % (diskon_b, akhir_b))
