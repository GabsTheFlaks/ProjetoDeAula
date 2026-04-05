# Aula 2: Análise de Dados Básica e Gráficos Simples
# Objetivo: Introduzir Listas e visualização de dados com Matplotlib

# Precisamos importar uma biblioteca.
# Uma biblioteca é como um "pacote de ferramentas" que outra pessoa criou para nos ajudar.
import matplotlib.pyplot as plt

print("--- AULA 2: ANÁLISE DE DADOS E GRÁFICOS ---")

# 1. Listas (Guardando várias informações em uma variável só)
meses = ["Jan", "Fev", "Mar", "Abr", "Mai"]
gastos_cantina = [20.50, 45.00, 15.00, 60.00, 30.00] # Em Reais (R$)

print("\nDados registrados:")
for i in range(len(meses)):
    print(f"Mês de {meses[i]}: R$ {gastos_cantina[i]}")

# 2. Noções de Estatística Básica
# Vamos calcular o total gasto e a média mensal
total_gasto = sum(gastos_cantina)
quantidade_meses = len(gastos_cantina)
media_mensal = total_gasto / quantidade_meses

print("\n--- RESUMO ESTATÍSTICO ---")
print(f"Total gasto no semestre: R$ {total_gasto}")
print(f"Média de gastos por mês: R$ {media_mensal}")

# 3. Criando um Gráfico Simples
print("\nGerando um gráfico na tela...")

# Criando um gráfico de barras simples
plt.bar(meses, gastos_cantina, color='skyblue')

# Adicionando um título e rótulos aos eixos
plt.title('Meus Gastos na Cantina da Escola')
plt.xlabel('Meses do Ano')
plt.ylabel('Valor Gasto (R$)')

# Mostrando o gráfico na tela!
plt.show()

# ==========================================
# EXERCÍCIO PARA OS ALUNOS NA SALA DE AULA:
# Peça para os alunos alterarem os valores na lista 'gastos_cantina'
# com os valores reais deles e verem como o gráfico muda!
# ==========================================
