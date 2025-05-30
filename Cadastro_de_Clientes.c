#include <stdio.h>
#include <stdlib.h>

struct Cliente {
   char nome[100];
   char email[100];
};

int main() {

    struct Cliente clientes[100];
    int opcao, numCliente = 0;

        do {

            printf("Selecione uma opcao:\n");
            printf("1 - Adicionar cliente.\n");
            printf("2 - Visualizar clientes.\n");
            printf("3 - Editar cliente\n");
            printf("4 - Excluir cliente.\n");
            printf("5 - Sair.\n");
            
            scanf("%d", &opcao);

            switch (opcao) {

            case 1: {
                printf("Digite o nome do cliente: ");
                scanf("%s", clientes[numCliente].nome);

                printf("Digite o email do cliente: ");
                scanf("%s", clientes[numCliente].email);

                numCliente++;

                printf("Cliente adicionado com sucesso.\n");
                break;
            }

            case 2: {
                printf("Clientes cadastros\n");

                for (int i = 0; i < numCliente; i++)
                {
                    printf("Nome: %s\n", clientes[i].nome);
                    printf("Email: %s\n", clientes[i].email);
                    printf("----------------------\n");
                }
                break;
            }

            case 3: {
                char nome[100];

                printf("Digite o nome do cliente que deseja editar: ");
                scanf("%s", nome);

                for (int i = 0; i < numCliente; i++)
                {
                    if (strcmp(clientes[i].nome, nome) == 0) {
                        printf("Digite o novo nome do cliente: ");
                        scanf("%s", clientes[i].nome);

                        printf("Digite o novo email do cliente: ");
                        scanf("%s", clientes[i].email);

                        printf("cliente editado com sucesso.\n");
                        break;
                    }
                }
                break;

                case 4: {
                    char nome[100];

                    printf("Digite o nome do cliente que deseja excluir: ");
                    scanf("%s", nome);

                    for (int i = 0; i < numCliente; i++)
                    {
                        if (strcmp(clientes[i].nome, nome) == 0) {
                            for (int j = i; j < numCliente - 1; i++)
                            {
                                clientes[j] = clientes[j + 1];
                            }

                            numCliente--;

                            printf("Cliente excluido com sucesso.\n");
                            break;
                        }
                    }
                    break;    
                }
                case 5:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida\n");
                break;
            }
        }
    } while (opcao != 5);

    return 0;
}