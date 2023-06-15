valor = int(input())
nh = 0; nm = 0;ns = 0
nh = valor//3600
valor -= (3600*nh)
nm = valor//60
valor -= (60*nm)
ns = valor
print(f"{nh}:{nm}:{ns}")
