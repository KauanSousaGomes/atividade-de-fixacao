#include <stdio.h>
#include <string.h>
#include "cliente.h"
#include "validacao.h"

void cadastrar_cliente(Cliente *cliente)
{

    printf("Digite o nome do Cliente:");
    fgets(cliente->nome, sizeof(cliente->nome), stdin);
    cliente->nome[strcspn(cliente->nome, "\n")] = 0;

    do {
        printf("Digite o CPF do Cliente: ")
        fgets(cliente->cpf,sizeof(cliente->cpf), stdin);
        cliente->cpf[strcspn(cliente->cpf, "\n")] = 0;
     } while(!validar_cpf(cliente->cpf));

    do {
        printf("Digite o e-mail do cliente:");
        fgets(cliente->email, sizeof(cliente->email), stdin);
        cliente->email[strcspn(cliente->email, "\n")] = 0;
    } while (!validar_email(cliente->email));

    printf("Digite a idade do cliente:");
    scanf("%d", &cliente->idade);
    getchar();
}