#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("\nPolitica de precos\n");

    int mercadorias;
    float preco;
    float maior_precoAbaixo = 0;
    float maior_precoAcima = 0;
    bool ERRO;

    do{
        printf("\nNumero de mercadorias: ");
        scanf("%i",&mercadorias);
        ERRO = mercadorias <= 0;
        if(ERRO) printf("\nNumero de mercadorias invalido, tente novamente");
    }while(ERRO);

    for(int i = 0; i < mercadorias; i++)
    {
        do{
        printf("\nDigite o preco da mercadoria: ");
        scanf("%f",&preco);
        ERRO = preco <= 0;
        if(ERRO) printf("\nPreco invalido, tente novamente");
        }while(ERRO);

        if(preco > maior_precoAbaixo && preco < 2000)
        {
            maior_precoAbaixo = preco;
        }

        if(preco > maior_precoAcima && preco > 2000)
        {
            maior_precoAcima = preco;
        }
    }
    printf("\nMaior preco abaixo de 2000 reais: %2.f", maior_precoAbaixo);
    printf("\nMaior preco acima de 2000 reais: %2.f", maior_precoAcima);

    return 0;
}
