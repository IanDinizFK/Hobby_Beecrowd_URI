palavra = str(input())

if (palavra == 'vertebrado'):
    palavra2 = str(input())
    if (palavra2 == 'ave'):
        palavra3 = str(input())
        if(palavra3 == 'carnivoro'):
            print("aguia")
        elif(palavra3 == 'onivoro'):
            print("pomba")
    elif(palavra2 == 'mamifero'):
        palavra4 = str(input())
        if(palavra4 == 'onivoro'):
            print("homem")
        elif(palavra4 == 'herbivoro'):
            print("vaca")
elif(palavra == 'invertebrado'):
    palavra5 = str(input())
    if(palavra5 == 'inseto'):
        palavra6 = str(input())
        if(palavra6 == 'hematofago'):
            print('pulga')
        elif(palavra6 == 'herbivoro'):
            print("lagarta")
    elif(palavra5 == 'anelideo'):
        palavra7 =  str(input())
        if(palavra7 == 'hematofago'):
            print("sanguessuga")
        elif(palavra7 == 'onivoro'):
            print("minhoca")
