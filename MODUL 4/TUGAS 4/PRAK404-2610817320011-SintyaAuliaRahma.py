nama = "Sintya Aulia Rahma"

while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    pilih = int(input("Masukkan Pilihan : "))

    if pilih == 5:
        print(f"Terimakasih, telah menggunakan kalkulator {nama}")
        break
    elif pilih == 1 or pilih == 2 or pilih == 3 or pilih == 4:
        nilai1 = float(input("Masukkan nilai pertama : "))
        nilai2 = float(input("Masukkan nilai kedua : "))

        if pilih == 1:
            operasi = "Penjumlahan"
            hasil = nilai1 + nilai2
        elif pilih == 2:
            operasi = "Pengurangan"
            hasil = nilai1 - nilai2
        elif pilih == 3:
            operasi = "perkalian"
            hasil = nilai1 * nilai2
        else:
            operasi = "Pembagian"
            hasil = nilai1 / nilai2

        print(f"Hasil {operasi} antara {nilai1:.2f} dengan {nilai2:.2f} adalah {hasil:.2f}")
    else:
        print("Input anda salah, silahkan coba lagi")
