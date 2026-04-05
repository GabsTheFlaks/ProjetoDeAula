# Aula 1: Nosso primeiro programa, Variáveis e Matemática Básica
# Objetivo: Mostrar como o Python funciona como uma calculadora super poderosa.

print("--- AULA 1: BEM-VINDO AO PYTHON! ---")
print("Olá, futuro programador(a)!")

# 1. Variáveis (Guardando informações na memória)
# Vamos imaginar que estamos calculando a nota de um aluno
nome_aluno = "Joãozinho"
nota_bimestre1 = 7.5
nota_bimestre2 = 8.0

print(f"\nCalculando as notas do aluno: {nome_aluno}")
print(f"Nota 1: {nota_bimestre1}")
print(f"Nota 2: {nota_bimestre2}")

# 2. Operações Matemáticas Simples (Lógica aplicada)
# O Python faz a conta sozinho e guarda em 'media'
media = (nota_bimestre1 + nota_bimestre2) / 2

print(f"A média final do aluno é: {media}")

# 3. Tomada de Decisão (If/Else) - A mágica acontece aqui!
print("\n--- RESULTADO FINAL ---")

if media >= 7.0:
    print("Situação: APROVADO! Parabéns, você foi muito bem.")
elif media >= 5.0:
    print("Situação: RECUPERAÇÃO. Estude um pouco mais.")
else:
    print("Situação: REPROVADO. Vamos tentar de novo ano que vem.")

# ==========================================
# EXERCÍCIO PARA OS ALUNOS NA SALA DE AULA:
# Peça para os alunos mudarem as variáveis 'nota_bimestre1' e 'nota_bimestre2'
# e rodarem o programa novamente para verem se o Joãozinho é aprovado ou não!
# ==========================================
