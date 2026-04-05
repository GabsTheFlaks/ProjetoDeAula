# Aula 3: Estruturas de Repetição (Loops)
# Objetivo: Como automatizar tarefas repetitivas sem copiar e colar código.

print("--- AULA 3: REPETIÇÕES (LOOPS) ---")

# Imagina que você quer contar até 5.
# Você poderia escrever print(1), print(2)... mas isso dá muito trabalho.

print("\nContando com o FOR (Para cada passo):")
# O comando range(1, 6) gera os números de 1 até 5 (o último número é ignorado)
for numero in range(1, 6):
    print(f"Número da chamada: {numero}")

print("\n-------------------")

# Outro exemplo: Tabuada!
numero_da_tabuada = 7
print(f"Tabuada do {numero_da_tabuada}:")

for multiplicador in range(1, 11):
    resultado = numero_da_tabuada * multiplicador
    print(f"{numero_da_tabuada} x {multiplicador} = {resultado}")

# ==========================================
# EXERCÍCIO PARA OS ALUNOS NA SALA DE AULA:
# Altere a variável 'numero_da_tabuada' para criar a tabuada do 9!
# ==========================================