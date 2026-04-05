# Aula 4: Listas e Estatística Básica
# Objetivo: Como guardar vários dados juntos e analisá-los de forma simples.

print("--- AULA 4: LISTAS E ESTATÍSTICA ---")

# Uma LISTA serve para guardar várias informações em uma só variável.
# Vamos imaginar as notas de uma turma inteira:
notas_turma = [7.5, 8.0, 5.5, 9.2, 4.0, 6.8, 10.0]

print(f"Notas registradas no sistema: {notas_turma}")

# Quantos alunos fizeram a prova?
# A função 'len' conta o tamanho da lista (length).
quantidade_alunos = len(notas_turma)
print(f"\nQuantidade de alunos na turma: {quantidade_alunos}")

# Estatísticas básicas: Somando todas as notas
# A função 'sum' soma tudo que tem na lista.
soma_das_notas = sum(notas_turma)

# Média da turma (Soma total dividida pela quantidade)
media_da_turma = soma_das_notas / quantidade_alunos
print(f"Média geral da turma: {media_da_turma:.2f}")

# Achando a maior e a menor nota
maior_nota = max(notas_turma)
menor_nota = min(notas_turma)

print(f"A maior nota foi: {maior_nota}")
print(f"A menor nota foi: {menor_nota}")

# ==========================================
# EXERCÍCIO PARA OS ALUNOS NA SALA DE AULA:
# Adicione mais 3 notas na lista 'notas_turma' e veja como a média muda automaticamente!
# ==========================================