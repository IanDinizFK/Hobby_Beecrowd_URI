valor = int(input())
nh = 0; nm = 0;ns = 0
nh = valor//365
valor -= (365*nh)
nm = valor//30
valor -= (30*nm)
ns = valor
print(f"{nh} ano(s)\n{nm} mes(es)\n{ns} dia(s)")
