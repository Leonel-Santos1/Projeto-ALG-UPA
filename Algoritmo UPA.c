#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nome_paciente[55], bairro[20], rua[30], sexo;
    int CPF, idade, doenca[4], n_pacientes, contador[4] = {0, 0, 0, 0};

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
        scanf("%i", &doenca[0]);

        printf("             Resfriado                1-Sim 0-Não: ");
        scanf("%i", &doenca[1]);

        printf("               Gripe                  1-Sim 0-Não: ");
        scanf("%i", &doenca[2]);

        printf("             Pneumonia                1-Sim 0-Não: ");
        scanf("%i", &doenca[3]);

        contador[0] += doenca[0];

        contador[1] += doenca[1];

        contador[2] += doenca[2];

        contador[3] += doenca[3];

        getchar();
        printf("----------------------------------------------------------\n");
        printf("\n");

        // system("cls");

        if ((doenca[0] > 1 || doenca[1] > 1 || doenca[2] > 1 || doenca[3] > 1) && (doenca[0] < 0 || doenca[1] < 0 || doenca[2] || doenca[3]))
        {
            printf("----------------------------------------------------------\n");
            printf("\nValores inválidos foram detectados. Por favor, digite novamente os dados.\n");
            printf("\n");
            i = 0;
        }
    }

    printf("Pessoas com apenas corisa é: %i\n", contador[0]);
    printf("Pessoas com apenas resfriado é: %i\n", contador[1]);
    printf("Pessoas com apenas gripe é: %i\n", contador[2]);
    printf("Pessoas com apenas pneumonia é: %i", contador[3]);

    return 0;
}