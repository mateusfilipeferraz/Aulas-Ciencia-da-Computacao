# OPERANDO DE FORMATAÇÃO DE STRING

# O operador de formatação de string é semelhante ao operador da linguagem
# C da família de funções printf(). Utilizaremos %s quando quisermos referenciar
# strings, %d quando quisermos referenciar valores inteiros e %f quando quisermos
# referenciar pontos flutuantes.

nome = "Juliana"
idade = "26"
peso = "60.8"
print("Seu nome é %s, ela tem %d anos e pesa %f quilogramas" %
      (nome, idade, peso))
print()
