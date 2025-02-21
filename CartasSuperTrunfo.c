#include <stdio.h> // biblioteca

#define Total 32 //frescura caso o número de cartas mude para maior ou menor o código se atualiza sozinho sem precisar fazer um por um.

typedef struct { // ((o typedef só esta aqui para resumir na varial que em vez de eu ter que escrever struct carta cidade.. eu como o struct e vou direto ao carta cidade)) uso para armazenar várias informações juntas aqui estamos criando um novo tipo de dado, como int, float, porem o não tem nenhum no sistema como queremos então fazemos o nosso.
 //estamos dizendo ao computador como uma carta deve ser quando for criada, é como um "molde" ou "plano de construção" que descreve como uma cidade deve ser no nosso sistema.
 //não existe esse tipo de dados básico em C esse tipo "cidade que nomeei como carta" não existe (int,float,char tipos primitivos) e assim por diante mas um cidade com essas informações não tem, 
 //por isso criamos o tipo Cidade primeiro, que nomeie como carta para depois podermos criar um vetor de cidades, que vai ficar la em baixo do Main.
    char codigo[4]; //char com 4 pq quero A01 e o \n conta somente como um caractere 
    int populacao; // números inteiros sem casas decimais 
    float area; // números com casas decimais 
    double pib;//usei double pq ele permite um número maior de caractere
    int pontos_turisticos;
} Carta; // é para nomear o conjunto (typedef struct)- podia ser qualquer nome

int main() { //inicio do código C 
    printf("\033[1;36;40mDesafio dos Paises\n"); //\033[1(negrito);36(cor);40(grifado)m
    printf("\033[1;36;40mSeja bem vindo ao meu primeiro jogo ;D\033[0m\n"); //\033[0m tira toda a modificação
    Carta cidades[Total]; //Essa linha cria um vetor de cidades, ele se chama vetor pq tem [] se não seria uma várial simples (ela é uma variavel) ou seja, vários espaços vazios, onde cada um pode armazenar uma cidade inteira, é como se ele reservasse 32 linhas na memoria.
    struct Cartas {

    char código[4];
    //char estados[8][20];
    //char cidades[32][20];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    printf("Insira o nome do pais\n");
    scanf("%19s", pais);

    printf("Insira o nome do estado \033[1mA\033[0m\n");
    scanf("%19s", estados[0]);

    printf("Insira o nome da Cidade \033[1mA01\033[0m\n");
    scanf("%19s", cidades[0]);

    printf("Insira a população da cidade \033[1mA01\033[0m\n");
    scanf("%f", &populacao);

    printf("Insira a área da cidade \033[1mA01\033[0m\n");
    scanf( "%f", &area);

    printf("Insira o PIB da cidade \033[1mA01\033[0m\n");
    scanf("%f", &pib);

    printf("Insira o número de pontos turisticos da cidade \033[1mA01\033[0m\n");
    scanf("%d", &pturisticos);
  


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
