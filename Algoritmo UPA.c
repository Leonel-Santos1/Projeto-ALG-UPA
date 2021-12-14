#include <stdio.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL, "portuguese");

    char nome_paciente[55], bairro[20], rua[30], sexo;
    int CPF, idade, cor, resf, gri, pneu, n_pacientes;

    // Cadastro do paciente
    printf("----------------------------------------------------------");
    printf("\n");
    printf("\n");

    printf("Digite a quantidade de paciente a serem registrados: ");
    scanf("%i", &n_pacientes);
    getchar();
    printf("\n");

    printf("----------------------------------------------------------");

    printf("\n");
    printf("\n");

    for (int i = 1; i <= n_pacientes; i++)
    {
        printf("--------------------Ficha do Paciente: %i------------------", i);
        printf("\n");
        printf("\n");

        printf("Nome do paciente: ");
        fgets(nome_paciente, 55, stdin);

        printf("Nome do Bairro: ");
        fgets(bairro, 20, stdin);

        printf("Nome da Rua: ");
        fgets(rua, 30, stdin);

        printf("Sexo do paciente ( M | F): ");
        scanf("%c", &sexo);

        printf("Idade do paciente: ");
        scanf("%i", &idade);

        printf("CPF: ");
        scanf("%i", &CPF);

        printf("\n");
        printf("----------------------------------------------------------\n");

        printf("\n");

        printf("--------------------Sintomas registrados------------------\n");
        printf("              Corisa                  1-Sim 0-Não: ");
        scanf("%i", &cor);

        printf("             Resfriado                1-Sim 0-Não: ");
        scanf("%i", &resf);

        printf("               Gripe                  1-Sim 0-Não: ");
        scanf("%i", &gri);

        printf("             Pneumonia                1-Sim 0-Não: ");
        scanf("%i", &pneu);

        getchar();
        printf("----------------------------------------------------------\n");
        printf("\n");
        // system("cls");
    }

    return 0;
}