#include <stdio.h>
#include <locale.h>

struct cadastro
{
    char nome[30][55];
    char bairro[30][25];
    char rua[30][30];
    char sexo[30][8];
    int idade[30];
    char CPF[30][13];
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    struct cadastro n, b, r, se, id, c;
    int doenca[4], n_pacientes, contador[15] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    // Cadastro do paciente
    printf("---------------------------------------------------------");
    printf("\n");
    printf("\n");

    printf("Digite a quantidade de paciente a serem registrados: ");
    scanf("%i", &n_pacientes);
    getchar();
    printf("\n");

    printf("---------------------------------------------------------");

    printf("\n");
    printf("\n");
    for (int i = 1; i <= n_pacientes; i++)
    {
        printf("------------------Ficha do Paciente: %i-------------------", i);
        printf("\n");
        printf("\n");

        printf("Nome do paciente: ");
        fgets(n.nome[i], 55, stdin);

        printf("CPF: ");
        fgets(c.CPF[i], 13, stdin);

        printf("Nome do Bairro: ");
        fgets(b.bairro[i], 25, stdin);

        printf("Nome da Rua: ");
        fgets(r.rua[i], 30, stdin);

        printf("Sexo do paciente M | F | Outro (Use a sigla): ");
        fgets(se.sexo[i], 2, stdin);

        printf("Idade do paciente: ");
        scanf("%i", &id.idade[i]);

        printf("\n");
        printf("---------------------------------------------------------\n");

        printf("\n");
        getchar();
    }
    system("cls");
    for (int i = 1; i <= n_pacientes; i++)
    {

        printf("----------------Sintomas do paciente: %i------------------\n", i);
        printf("Nome: %s", n.nome[i]);
        printf("CPF: %s", c.CPF[i]);
        printf("Bairro: %s", b.bairro[i]);
        printf("Rua: %s", r.rua[i]);
        printf("Sexo: %s\n", se.sexo[i]);
        printf("Idade: %i", id.idade[i]);
        printf("\n");
        printf("---------------------------------------------------------\n");

        printf("Corisa                                1-Sim 0-N�o: ");
        scanf("%i", &doenca[0]);

        printf("Resfriado                             1-Sim 0-N�o: ");
        scanf("%i", &doenca[1]);

        printf("Gripe                                 1-Sim 0-N�o: ");
        scanf("%i", &doenca[2]);

        printf("Pneumonia                             1-Sim 0-N�o: ");
        scanf("%i", &doenca[3]);

        // 1 doenca[0] = Corisa || 2 doenca[1] = Resfriado || 3 doenca[2] = Gripe || 4 doenca[3] = Pneumonia

        if (doenca[0] == 1 && !(doenca[1] == 1) && !(doenca[2] == 1) && !(doenca[3] == 1))
        {
            contador[0] += 1;
        }

        if (doenca[1] == 1 && !(doenca[0] == 1) && !(doenca[2] == 1) && !(doenca[3] == 1))
        {
            contador[1] += 1;
        }

        if (doenca[2] == 1 && !(doenca[0] == 1) && !(doenca[1] == 1) && !(doenca[3] == 1))
        {
            contador[2] += 1;
        }

        if (doenca[3] == 1 && !(doenca[0] == 1) && !(doenca[1] == 1) && !(doenca[2] == 1))
        {
            contador[3] += 1;
        }

        // Combina��es duplas das doen�as

        // 1 doenca[0] = Corisa || 2 doenca[1] = Resfriado || 3 doenca[2] = Gripe || 4 doenca[3] = Pneumonia

        if (doenca[0] == 1 && doenca[1] == 1 && !(doenca[2] == 1) && !(doenca[3] == 1))
        {
            contador[4] += 1;
        }

        if (doenca[0] == 1 && doenca[2] == 1 && !(doenca[1] == 1) && !(doenca[3] == 1))
        {
            contador[5] += 1;
        }

        if (doenca[0] == 1 && doenca[3] == 1 && !(doenca[1] == 1) && !(doenca[2] == 1))
        {
            contador[6] += 1;
        }

        if (doenca[1] == 1 && doenca[2] == 1 && !(doenca[0] == 1) && !(doenca[3] == 1))
        {
            contador[7] += 1;
        }

        if (doenca[1] == 1 && doenca[3] == 1 && !(doenca[2] == 1) && !(doenca[0] == 1))
        {
            contador[8] += 1;
        }

        if (doenca[2] == 1 && doenca[3] == 1 && !(doenca[0] == 1) && !(doenca[1] == 1))
        {
            contador[9] += 1;
        }

        // Combina��o triplaS das doen�as
        // 1 doenca[0] = Corisa || 2 doenca[1] = Resfriado || 3 doenca[2] = Gripe || 4 doenca[3] = Pneumonia

        if (doenca[0] == 1 && doenca[1] == 1 && doenca[2] == 1 && !(doenca[3] == 1))
        {
            contador[10] += 1;
        }

        if (doenca[0] == 1 && doenca[1] == 1 && doenca[3] == 1 && !(doenca[2] == 1))
        {
            contador[11] += 1;
        }

        if (doenca[0] == 1 && doenca[2] == 1 && doenca[3] == 1 && !(doenca[1] == 1))
        {
            contador[12] += 1;
        }

        if (doenca[1] == 1 && doenca[2] == 1 && doenca[3] == 1 && !(doenca[0] == 1))
        {
            contador[13] += 1;
        }

        else if (doenca[0] == 1 && doenca[1] == 1 && doenca[2] == 1 && doenca[3] == 1)
        {
            contador[14]++;
        }

        if (doenca[0] > 1 || doenca[1] > 1 || doenca[2] > 1 || doenca[3] > 1)
        {
            system("cls");
            printf("---------------------------------------------------------\n");
            printf("\n          Valores inv�lidos foram detectados.           \n");
            printf("           Por favor, digite novamente os dados.          \n");
            printf("\n");
            i = 0;

            for (int n = 0; n < 15; n++)
            {
                contador[n] = 0;
            }
        }

        else if (doenca[0] < 0 || doenca[1] < 0 || doenca[2] < 0 || doenca[3] < 0)
        {
            system("cls");
            printf("---------------------------------------------------------\n");
            printf("\n          Valores inv�lidos foram detectados.           \n");
            printf("           Por favor, digite novamente os dados.          \n");
            printf("\n");
            i = 0;

            for (int n = 0; n < 15; n++)
            {
                contador[n] = 0;
            }
        }

        printf("---------------------------------------------------------\n");
        printf("\n");
        // system("cls");
    }
    printf("-------------------------APENAS--------------------------\n");
    printf("\n");
    printf("Pessoa(as) com APENAS Corisa �: %i\n", contador[0]);
    printf("Pessoa(as) com APENAS Resfriado �: %i\n", contador[1]);
    printf("Pessoa(as) com APENAS Gripe �: %i\n", contador[2]);
    printf("Pessoa(as) com APENAS Pneumonia �: %i\n", contador[3]);
    printf("\n");
    printf("---------------------------------------------------------\n");
    printf("\n");

    printf("-----------------------Combina��es-----------------------\n");
    printf("\n");
    printf("Pessoa(as) com CORISA E RESFRIADO �: %i\n", contador[4]);
    printf("Pessoa(as) com CORISA E GRIPE �: %i\n", contador[5]);
    printf("Pessoa(as) com CORISA E PNEUMONIA �: %i\n", contador[6]);
    printf("Pessoa(as) com RESFRIADO E GRIPE �: %i\n", contador[7]);
    printf("Pessoa(as) com RESFRIADO E PNEUMONIA �: %i\n", contador[8]);
    printf("Pessoa(as) com GRIPE E PNEUMONIA �: %i\n", contador[9]);
    printf("\n");

    printf("------------Combina��es triplas ou quadrupla(s)-------------\n");
    printf("\n");
    printf("Pessoa(as) com CORISA, RESFRIADO E GRIPE �: %i\n", contador[10]);
    printf("Pessoa(as) com CORISA, RESFRIADO E PNEUMONIA �: %i\n", contador[11]);
    printf("Pessoa(as) com CORISA, GRIPE E PNEUMONIA �: %i\n", contador[12]);
    printf("Pessoa(as) com RESFRIADO, GRIPE E PNEUMONIA �: %i\n", contador[13]);
    printf("Pessoa(as) com TODAS as doen�as �: %i\n", contador[14]);
    printf("\n");
    printf("---------------------------------------------------------\n");

    return 0;
}