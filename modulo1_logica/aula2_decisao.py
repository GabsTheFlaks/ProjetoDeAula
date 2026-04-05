# Aula 2: Tomada de Decisão (If / Else)
# Objetivo: Ensinar o computador a tomar decisões com base em condições.

print("--- AULA 2: TOMADA DE DECISÃO ---")

# Vamos reaproveitar a ideia da média da aula passada
media_final = 6.5

print(f"A média do aluno foi: {media_final}")
print("Verificando situação do aluno...\n")

# A estrutura IF (Se) e ELSE (Senão)
if media_final >= 7.0:
    print("Resultado: APROVADO! 🎉")
    print("Parabéns, você foi muito bem.")
elif media_final >= 5.0:
    # ELIF significa "Else If" (Senão, Se)
    print("Resultado: RECUPERAÇÃO! 📚")
    print("Estude um pouco mais para a prova final.")
else:
    print("Resultado: REPROVADO. 😔")
    print("Vamos tentar de novo ano que vem.")

# ==========================================
# EXERCÍCIO PARA OS ALUNOS NA SALA DE AULA:
# Modifique o valor da variável 'media_final' para 8.0 e depois para 4.0.
# Observe qual mensagem o Python imprime na tela em cada caso.
# ==========================================