# Cálculo da Média de Idade Familiar

Este programa em linguagem C calcula a média de idade de uma família com base no número de familiares e suas respectivas idades fornecidas pelo usuário. Ele utiliza um loop `while` para coletar as idades de cada membro da família, calcula a soma total e, em seguida, determina a média.

## Funcionalidades

- Permite ao usuário inserir o número total de familiares.
- Coleta as idades de cada membro da família.
- Calcula e exibe a média de idade dos familiares com duas casas decimais.

---

## Como funciona o programa

1. **Entrada do número de familiares**  
   O programa solicita ao usuário o número total de familiares para determinar quantas idades precisam ser fornecidas.

2. **Coleta das idades**  
   Em um loop `while`, o programa solicita a idade de cada familiar e acumula a soma dessas idades.

3. **Cálculo da média**  
   Após obter todas as idades, o programa calcula a média dividindo o total das idades pelo número de familiares.

4. **Saída do resultado**  
   O programa exibe a média de idade com duas casas decimais.

---

## Exemplo de Execução

```plaintext
Colocar numero de familiares: 3
Colocar as idades do familiar: 25
Colocar as idades do familiar: 30
Colocar as idades do familiar: 35
A media familiar é de 30.00
```

---

## Código-Fonte

```c
#include <stdio.h>

int main() {
    int NmrFamiliares;
    int idade;
    int contador = 1;
    int idadetotal = 0;

    printf("Colocar numero de familiares ");
    scanf("%d", &NmrFamiliares);

    while (contador <= NmrFamiliares) {
        printf("Colocar as idades do familiar ");
        scanf("%d", &idade);
        contador = contador + 1;
        idadetotal = idadetotal + idade;
    }

    float media = (float)idadetotal / NmrFamiliares;
    printf("A media familiar é de media %.2f", media);

    return 0;
}
```

---

## Requisitos para Execução

1. Um compilador de C, como GCC.
2. Um ambiente de desenvolvimento ou terminal para compilar e executar o programa.

---

## Como Compilar e Executar

1. Salve o código em um arquivo com a extensão `.c`, por exemplo, `media_familiar.c`.
2. Abra o terminal e navegue até o diretório onde o arquivo está salvo.
3. Compile o código com o seguinte comando:

   ```bash
   gcc media_familiar.c -o media_familiar
   ```

4. Execute o programa com o comando:

   ```bash
   ./media_familiar
   ```

---

## Considerações

- Certifique-se de inserir um número inteiro positivo para o número de familiares.
- O programa não trata entradas inválidas, como números negativos ou não inteiros, portanto, insira os dados corretamente.
- Se o número de familiares for zero, o programa pode gerar um erro de divisão por zero. Uma melhoria futura seria implementar uma validação para esse caso.

---

## Autor

Este programa foi criado como um exemplo de introdução à programação em C, com foco em loops, entrada de dados e cálculos básicos. **DJA**
