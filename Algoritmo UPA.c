#include <stdio.h>
#include <locale.h>

int exi_sintomas(int doenca)
{
    int do1, do2;
    if (doenca == 1)
    {
        do1 = doenca;
        return do1;
    }

    if (doenca == 0)
    {
        do2 = 0;
        return do2;
    }
}

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
    int doenca[4], exi_doenca1[30], exi_doenca2[30], exi_doenca3[30], exi_doenca4[30];
    int n_pacientes, num = 1, num2, num3, num4, num5;
    int contador[15] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

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
        fgets(se.sexo[i], 8, stdin);

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
        printf("Sexo: %s", se.sexo[i]);
        printf("Idade: %i", id.idade[i]);
        printf("\n");
        printf("---------------------------------------------------------\n");

        printf("Corisa                                1-Sim 0-Não: ");
        scanf("%i", &doenca[0]);
        exi_doenca1[i] = doenca[0];

        printf("Resfriado                             1-Sim 0-Não: ");
        scanf("%i", &doenca[1]);
        exi_doenca2[i] = doenca[1];

        printf("Gripe                                 1-Sim 0-Não: ");
        scanf("%i", &doenca[2]);
        exi_doenca3[i] = doenca[2];

        printf("Pneumonia                             1-Sim 0-Não: ");
        scanf("%i", &doenca[3]);
        exi_doenca4[i] = doenca[3];

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

        // Combinações duplas das doenças

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

        // Combinação triplaS das doenças
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
            printf("\n          Valores inválidos foram detectados.           \n");
            printf("           Por favor, digite novamente os dados.          \n");
            printf("\n");
            i = 0;

            for (int n = 0; n < 15; n++)
            {
                contador[n] = 0;
                exi_doenca1[n] = 0;
                exi_doenca2[n] = 0;
                exi_doenca3[n] = 0;
                exi_doenca4[n] = 0;
            }
        }

        else if (doenca[0] < 0 || doenca[1] < 0 || doenca[2] < 0 || doenca[3] < 0)
        {
            system("cls");
            printf("---------------------------------------------------------\n");
            printf("\n          Valores inválidos foram detectados.           \n");
            printf("           Por favor, digite novamente os dados.          \n");
            printf("\n");
            i = 0;

            for (int n = 0; n < 15; n++)
            {
                contador[n] = 0;
                exi_doenca1[n] = 0;
                exi_doenca2[n] = 0;
                exi_doenca3[n] = 0;
                exi_doenca4[n] = 0;
            }
        }

        printf("---------------------------------------------------------\n");
        printf("\n");
    }
    system("cls");

    printf("-------------------------APENAS--------------------------\n");
    printf("\n");
    printf("Pessoa(as) com APENAS Corisa é: %i\n", contador[0]);
    printf("Pessoa(as) com APENAS Resfriado é: %i\n", contador[1]);
    printf("Pessoa(as) com APENAS Gripe é: %i\n", contador[2]);
    printf("Pessoa(as) com APENAS Pneumonia é: %i\n", contador[3]);
    printf("\n");
    printf("---------------------------------------------------------\n");
    printf("\n");

    printf("-----------------------Combinações-----------------------\n");
    printf("\n");
    printf("Pessoa(as) com CORISA E RESFRIADO é: %i\n", contador[4]);
    printf("Pessoa(as) com CORISA E GRIPE é: %i\n", contador[5]);
    printf("Pessoa(as) com CORISA E PNEUMONIA é: %i\n", contador[6]);
    printf("Pessoa(as) com RESFRIADO E GRIPE é: %i\n", contador[7]);
    printf("Pessoa(as) com RESFRIADO E PNEUMONIA é: %i\n", contador[8]);
    printf("Pessoa(as) com GRIPE E PNEUMONIA é: %i\n", contador[9]);
    printf("\n");
    printf("---------------------------------------------------------\n");
    printf("\n");

    printf("-----------Combinações triplas ou quadrupla(s)-----------\n");
    printf("\n");
    printf("Pessoa(as) com CORISA, RESFRIADO E GRIPE é: %i\n", contador[10]);
    printf("Pessoa(as) com CORISA, RESFRIADO E PNEUMONIA é: %i\n", contador[11]);
    printf("Pessoa(as) com CORISA, GRIPE E PNEUMONIA é: %i\n", contador[12]);
    printf("Pessoa(as) com RESFRIADO, GRIPE E PNEUMONIA é: %i\n", contador[13]);
    printf("Pessoa(as) com TODAS as doenças é: %i\n", contador[14]);
    printf("\n");
    printf("---------------------------------------------------------\n");
    printf("\n");

    while (num == 1)
    {

        printf("---------------------------------------------------------\n");
        printf("\n");
        printf("Deseja exibir a ficha de um paciente: 1-Sim 0-Não: ");
        scanf("%i", &num);
        printf("\n");
        printf("---------------------------------------------------------\n");
        printf("\n");
        system("cls");
        
        for (int N = 1; N <= num; N++)
        {

            printf("---------------------------------------------------------\n");
            printf("\n");
            printf("Digite o número da ficha paciente que deseja: ");
            scanf("%i", &num2);
            printf("\n");
            printf("---------------------------------------------------------\n");

            if (num2 > n_pacientes)
            {
                N = 0;
                system("cls");
            }

            printf("\n");
            printf("Nome: %s", n.nome[num2]);
            printf("CPF: %s", c.CPF[num2]);
            printf("Bairro: %s", b.bairro[num2]);
            printf("Rua: %s", r.rua[num2]);
            printf("Sexo: %s", se.sexo[num2]);
            printf("Idade: %i", id.idade[num2]);
            printf("\n");

            printf("Corisa 1-Sim 0-Não: %i\n", exi_sintomas(exi_doenca1[num2]));
            printf("Resfriado 1-Sim 0-Não: %i\n", exi_sintomas(exi_doenca2[num2]));
            printf("Gripe 1-Sim 0-Não: %i\n", exi_sintomas(exi_doenca3[num2]));
            printf("Pneumonia 1-Sim 0-Não: %i\n", exi_sintomas(exi_doenca4[num2]));
            printf("\n");
            printf("---------------------------------------------------------\n");
            printf("\n");

            printf("---------------------------------------------------------\n");
            printf("\n");
            printf("Deseja ver outro paciente: 1-Sim 0-Não: ");
            scanf("%i", &num3);
            printf("\n");
            printf("---------------------------------------------------------\n");
            printf("\n");

            if (num3 == 1)
            {
                N = 0;
                system("cls");
            }
        }

        printf("---------------------------------------------------------\n");
        printf("\n");
        printf("Deseja voltar para a lista com o Nº de pessoas: 1-Sim 0-Não: ");
        scanf("%i", &num4);
        printf("\n");
        printf("---------------------------------------------------------\n");
        printf("\n");

        system("cls");

        if (num4 == 1)
        {
            system("cls");
            printf("-------------------------APENAS--------------------------\n");
            printf("\n");
            printf("Pessoa(as) com APENAS Corisa é: %i\n", contador[0]);
            printf("Pessoa(as) com APENAS Resfriado é: %i\n", contador[1]);
            printf("Pessoa(as) com APENAS Gripe é: %i\n", contador[2]);
            printf("Pessoa(as) com APENAS Pneumonia é: %i\n", contador[3]);
            printf("\n");
            printf("---------------------------------------------------------\n");
            printf("\n");

            printf("-----------------------Combinações-----------------------\n");
            printf("\n");
            printf("Pessoa(as) com CORISA E RESFRIADO é: %i\n", contador[4]);
            printf("Pessoa(as) com CORISA E GRIPE é: %i\n", contador[5]);
            printf("Pessoa(as) com CORISA E PNEUMONIA é: %i\n", contador[6]);
            printf("Pessoa(as) com RESFRIADO E GRIPE é: %i\n", contador[7]);
            printf("Pessoa(as) com RESFRIADO E PNEUMONIA é: %i\n", contador[8]);
            printf("Pessoa(as) com GRIPE E PNEUMONIA é: %i\n", contador[9]);
            printf("\n");
            printf("---------------------------------------------------------\n");
            printf("\n");

            printf("-----------Combinações triplas ou quadrupla(s)-----------\n");
            printf("\n");
            printf("Pessoa(as) com CORISA, RESFRIADO E GRIPE é: %i\n", contador[10]);
            printf("Pessoa(as) com CORISA, RESFRIADO E PNEUMONIA é: %i\n", contador[11]);
            printf("Pessoa(as) com CORISA, GRIPE E PNEUMONIA é: %i\n", contador[12]);
            printf("Pessoa(as) com RESFRIADO, GRIPE E PNEUMONIA é: %i\n", contador[13]);
            printf("Pessoa(as) com TODAS as doenças é: %i\n", contador[14]);
            printf("\n");
            printf("---------------------------------------------------------\n");
            printf("\n");
        }
        printf("---------------------------------------------------------\n");
        printf("\n");
        printf("Deseja fazer algumas das funções anteriores 1-Sim 0-Não: ");
        scanf("%i", &num5);
        printf("\n");
        printf("---------------------------------------------------------\n");
        printf("\n");

        if (num5 == 1)
        {
            num = 0;
            system("cls");
        }
        num++;
    }

    return 0;
}