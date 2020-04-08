#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void calc_preco_final(char* tipo, float* preco, char* dia);

int main()
{
    // ----------|--------|
    // 12345678901234567890
    // LANÇAMENTO
    // COMUM
    char tipo[10+1] = {'\0'};
    // ----------|--------|
    // 12345678901234567890
    // SEGUNDA
    // TERCA
    // QUARTA
    // QUINTA
    // SEXTA
    // SABADO
    // DOMINGO
    char dia[7+1] = {'\0'};
    float preco = 0.0f;
    char* sair = "SAIR";

    int continuar = 1;
    do
    {
        printf("Digite o tipo de locação: ");
        scanf("%s", tipo);
        if(strcmp(sair, tipo) == 0)
            return 0;
        printf("Digite o preço sem desconto: ");
        scanf("%f", &preco);
        if(strcmp(sair, dia) == 0)
            return 0;
        printf("Digite o dia da locação: ");
        scanf("%s", dia);
        calc_preco_final((char*)tipo, &preco, dia);
        printf("\nPreço final de locação: %f\n", preco);
        while ((getchar()) != '\n');
    } while (continuar);

    return 0;
}

void calc_preco_final(char* tipo, float* preco, char* dia)
{
    float descontotipo = 1.0f;
    if(strcmp(tipo, "LANÇAMENTO") == 0)
        descontotipo = 1.15f;

    float descontodia = 1.0f;
    if(strcmp(dia, "SEGUNDA") == 0)
        descontodia = 0.64f;
    else if(strcmp(dia, "TERCA") == 0)
        descontodia = 0.64f;
    else if(strcmp(dia, "QUARTA") == 0)
        descontodia = 0.77f;
    else if(strcmp(dia, "QUINTA") == 0)
        descontodia = 0.64f;
    else if(strcmp(dia, "SEXTA") == 0)
        descontodia = 0.77f;

    *preco = (*preco * descontotipo) * descontodia;
}
