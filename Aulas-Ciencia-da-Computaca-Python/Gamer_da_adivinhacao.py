# ESTRUTURA DE CONDIÇÃO
print("Bem-vindo ao jogo!")

#implemnetação do jogo

entrada = input("Digite um número entre O e 100:")

valor = int(entrada)
#Aprimotamento do código
print()

if valor==10 or valor==20 or valor==30:
    print("Você  venceu.Parabéns!")
    print()
    if valor ==10:
        print ("Você ganhou 5 pontos")
        print()
    elif valor==20:
        print("Você ganhou 100 pontos")
    else:
        print("Você ganhou 1000 pontos")
else :
        print("Você perdeu. Tente Novamente !")
        print()
        print("G A M E   O V E R")