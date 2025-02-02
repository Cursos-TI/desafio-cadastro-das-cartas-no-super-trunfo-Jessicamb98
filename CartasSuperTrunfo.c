#include <stdio.h>

int main() {
    printf("\033[1;36;40mDesafio dos Paises\n");
    printf("\033[1;36;40mSeja bem vindo ao meu primeiro jogo ;D\033[0m\n");

    char pais[20];
    char estados[20];
    char cidades[20];

    printf("Insira o nome do pais\n");
    scanf("%19s", pais);

    getchar(); 

    printf("Insira o nome do estado \033[1mA\033[0m\n");
    scanf("%19s", estados);

    getchar();

    printf("Insira o nome da Cidade \033[1mA01\033[0m\n");
    scanf("%19s", cidades);
    
    getchar();

    printf("Insira o nome da Cidade \033[1mA02\033[0m\n");
    scanf("%19s", cidades);

    getchar();

    printf("Insira o nome da Cidade \033[1mA03\033[0m\n");
    scanf("%19s", cidades);

    getchar();

    printf("Insira o nome da Cidade \033[1mA04\033[0m\n");
    scanf("%19s", cidades);

    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
