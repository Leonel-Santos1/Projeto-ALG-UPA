#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nome_paciente[55], bairro[20], rua[30], sexo[12];
    int CPF, idad;

    // Cadastro do paciente
    printf("---------------------Ficha do Paciente--------------------");
    printf("\n");
    printf("\n");
    printf("Nome do paciente: ");
    fgets(nome_paciente, 55, stdin);

    printf("Nome do Bairro: ");
    fgets(bairro, 20, stdin);

    printf("Nome da Rua: ");
    fgets(rua, 30, stdin);

    printf("Sexo do paciente: ");
    scanf("%s", &sexo);

    printf("Idade do paciente: ");
    scanf("%i", &idad);

    printf("CPF: ");
    scanf("%i", &CPF);

  


    printf("\n");
    printf("-----------------------------------------------------------\n");

    printf("\n");

    printf("--------------------Sintomas registrados-------------------");
    printf("Corisa \n Resfriado \n Gripe");
    puts("\a");

    return 0;
}