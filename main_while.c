#include <stdio.h>
#include <stdlib.h>

// Função principal.
void main()
{
    // Declaração e inicialização de uma variável inteira 'i' com o valor 0.
    int i = 0;

    // Loop 'while' que continua enquanto 'i' for menor que 11.
    while (i < 11)
    {
        // Imprime o valor de 'i' e a mensagem "TreinaWeb!".
        printf("%d TreinaWeb!\n", i);

        // Incrementa o valor de 'i' em 1.
        i++;
    }

    // Retorna 0 indicando que a execução ocorreu sem erros.
    return 0;
}
