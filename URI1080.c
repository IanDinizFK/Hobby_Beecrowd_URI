lista = []
i = 0
while len(lista) < 100:
  x = int(input(""))
  lista.append(x)
maior = max(lista)
for i in range(len(lista)):
  if(maior == lista[i]):
    pos = i
    break
print(maior)
print(pos+1)
