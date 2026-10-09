import math

A = float(input())
B = float(input())

alas = math.sqrt(B * B - A * A)
tinggi = A
keliling = alas + tinggi + B
luas = 0.5 * alas * tinggi

print(f"Alas = {alas:.0f} cm")
print(f"Tinggi = {tinggi:.0f} cm")
print(f"Keliling = {keliling:.0f} cm")
print(f"Luas = {luas:.0f} cm^2")