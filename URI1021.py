valor = float(input())
n100 = 0; n50 = 0; n20 = 0; n10 = 0; n5 = 0; n2 = 0;n1 = 0
m1 = 0; m50 = 0; m25 = 0; m10 = 0; m5 = 0; m01 = 0

n100 = valor//100
valor -= (100*n100)

n50 = valor//50
valor -= (50*n50)

n20 = valor//20
valor -= (20*n20)

n10 = valor//10
valor -= (10*n10)

n5 = valor//5
valor -= (5*n5)

n2 = valor//2
valor -= (2*n2)

n1 = valor//1
valor -= (1*n1)
m50 = valor//0.50
valor -= (0.50*m50)
m25 = valor//0.25
valor -= (0.25*m25)
m10 = valor//0.10
valor -= (0.10*m10)
m5 = valor//0.05
valor -= (0.05*m5)
if(valor == 0.009999999999999995):
  m01 = 1
else:
  m01 = valor//0.01


print("NOTAS:")
print(f"{n100:.0f} nota(s) de R$ 100.00")
print(f"{n50:.0f} nota(s) de R$ 50.00")
print(f"{n20:.0f} nota(s) de R$ 20.00")
print(f"{n10:.0f} nota(s) de R$ 10.00")
print(f"{n5:.0f} nota(s) de R$ 5.00")
print(f"{n2:.0f} nota(s) de R$ 2.00")
print("MOEDAS:")
print(f"{n1:.0f} moeda(s) de R$ 1.00")
print(f"{m50:.0f} moeda(s) de R$ 0.50")
print(f"{m25:.0f} moeda(s) de R$ 0.25")
print(f"{m10:.0f} moeda(s) de R$ 0.10")
print(f"{m5:.0f} moeda(s) de R$ 0.05")
print(f"{m01:.0f} moeda(s) de R$ 0.01")
