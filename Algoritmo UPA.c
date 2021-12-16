#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nome_paciente[55], bairro[20], rua[30], sexo;
    int CPF, idade, doenca[4], n_pacientes, contador[5] = {0, 0, 0, 0, 0};

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
        getchar();
    }
    for (int i = 1; i <= n_pacientes; i++)
    {
        printf("--------------------Sintomas do paciente: %i------------------\n", i);
        printf("              Corisa                  1-Sim 0-Não: ");
        scanf("%i", &doenca[0]);

        printf("             Resfriado                1-Sim 0-Não: ");
        scanf("%i", &doenca[1]);

        printf("               Gripe                  1-Sim 0-Não: ");
        scanf("%i", &doenca[2]);

        printf("             Pneumonia                1-Sim 0-Não: ");
        scanf("%i", &doenca[3]);

        if (doenca[0] == 1 && !(doenca[1] == 1) && !(doenca[2] == 1) && !(doenca[3] == 1))
        {
            contador[0] += doenca[0];
        }

        if (doenca[1] == 1 && !(doenca[0] == 1) && !(doenca[2] == 1) && !(doenca[3] == 1))
        {
            contador[1] += doenca[1];
        }

        if (doenca[2] == 1 && !(doenca[0] == 1) && !(doenca[1] == 1) && !(doenca[3] == 1))
        {
            contador[2] += doenca[2];
        }

        if (doenca[3] == 1 && !(doenca[0] == 1) && !(doenca[1] == 1) && !(doenca[2] == 1))
        {
            contador[3] += doenca[3];
        }

        else if (doenca[0] == 1 && doenca[1] == 1 && doenca[2] == 1 && doenca[3] == 1)
        {
            contador[4]++;
        }

        if (doenca[0] > 1 || doenca[1] > 1 || doenca[2] > 1 || doenca[3] > 1)
        {
            printf("----------------------------------------------------------\n");
            printf("\nValores inválidos foram detectados. Por favor, digite novamente os dados.\n");
            printf("\n");
            i = 0;
            contador[0] = 0;
            contador[1] = 0;
            contador[2] = 0;
            contador[3] = 0;
            contador[4] = 0;
        }

        else if (doenca[0] < 0 || doenca[1] < 0 || doenca[2] < 0 || doenca[3] < 0)
        {
            printf("----------------------------------------------------------\n");
            printf("\nValores inválidos foram detectados. Por favor, digite novamente os dados.\n");
            printf("\n");
            i = 0;
            contador[0] = 0;
            contador[1] = 0;
            contador[2] = 0;
            contador[3] = 0;
            contador[4] = 0;
        }

        printf("----------------------------------------------------------\n");
        printf("\n");
        // system("cls");
    }

    // system("cls")

    printf("Pessoa(as) com APENAS Corisa é: %i\n", contador[0]);
    printf("Pessoa(as) com APENAS Resfriado é: %i\n", contador[1]);
    printf("Pessoa(as) com APENAS Gripe é: %i\n", contador[2]);
    printf("Pessoa(as) com APENAS Pneumonia é: %i\n", contador[3]);
    printf("Pessoa(as) com TODAS as doenças é: %i", contador[4]);

    return 0;
}