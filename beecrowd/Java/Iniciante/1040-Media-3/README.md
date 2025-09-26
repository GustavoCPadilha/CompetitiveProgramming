# Beecrowd 1040 - Média 3

## Enunciado

Leia quatro números de ponto flutuante N1, N2, N3 e N4, cada um com uma casa decimal, correspondentes às quatro notas de um aluno. Calcule a **média ponderada** do aluno, considerando os pesos:

- N1 → peso 2  
- N2 → peso 3  
- N3 → peso 4  
- N4 → peso 1  

A fórmula da média ponderada é:

Média = ((N1 × 2) + (N2 × 3) + (N3 × 4) + (N4 × 1)) / 10

- Se a média for **maior ou igual a 7.0**, o aluno está **aprovado**.  
- Se a média for **inferior a 5.0**, o aluno está **reprovado**.  
- Se a média estiver entre **5.0 e 6.9**, o aluno estará **em exame**. Nesse caso, deve-se ler a nota do exame e recalcular a média final:

Média Final = (Média + Nota do Exame) / 2

E determinar se o aluno está aprovado ou reprovado após o exame.

## Entrada

- Quatro números de ponto flutuante N1, N2, N3 e N4, separados por espaço.  
- Caso o aluno esteja em exame, uma quinta linha com a nota do exame será fornecida.

## Saída

- Exibir a média inicial do aluno:  
Media: X.X

- Exibir se o aluno está aprovado ou reprovado:  
Aluno aprovado.  
ou  
Aluno reprovado.

- Se o aluno estiver em exame, exibir:  
Aluno em exame.  
Nota do exame: X.X  
Aluno aprovado. / Aluno reprovado.  
Media final: X.X

> Todas as médias devem ser exibidas com **uma casa decimal**.

## Exemplos

**Entrada**  
2.0 4.0 7.5 8.0  
6.4

**Saída**  
Media: 5.4  
Aluno em exame.  
Nota do exame: 6.4  
Aluno aprovado.  
Media final: 5.9

**Entrada**  
9.0 4.0 8.5 9.0

**Saída**  
Media: 7.3  
Aluno aprovado.

## Observações

- Utilize a fórmula da média ponderada para calcular a média inicial.  
- O cálculo da média final só é necessário se o aluno estiver em exame.  
- Todas as notas e médias devem ser exibidas com **uma casa decimal**, mesmo que o valor seja inteiro.  
- Este problema testa condicionais, cálculos com ponto flutuante e formatação de saída.
