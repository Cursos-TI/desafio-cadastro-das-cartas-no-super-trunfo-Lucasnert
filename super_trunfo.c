#include <stdio.h> //Inclui uma biblioteca de entrada e saída, necessaria para usar a função printf

int main () { //Todo programa em C coemça com a função main. É a partir daqui que inicia a execução

    int carta1, carta2; // Declara variáveis inteiras que irão receber a numeração das cartas
    char estado1[15], estado2[15]; // Declara uma variável do tipo caractere, essas variáveis receberão o nome dos estados
    char cod1[15], cod2[15]; // Variáveis do tipo caracter, vão receber o código da carta. Foi utilizada a variável do tipo Char para utilizar números e letras parao código
    char nome1[15], nome2[15];// Variáveis do tipo caracter, vão receber o nome da cidade.
    float pop1, pop2; // Declara uma variável de ponto flutuante, vai receber a quantidade da população
    float area1, area2; // Declara uma variável de ponto flutuante, vai receber a área referente a cidade
    float pib1, pib2; // Declara uma variável de ponto flutuante, vai receber o PIB da cidade
    int numpt1, numpt2; // Declara uma variável inteira, vai receber o número de pontos turísticos
    float densdemo1, densdemo2; // Declara uma de ponto flutuante, vai calcular a densidade demográfica das cidades;
    float rendaper1, rendaper2; // Declara uma de ponto flutuante, vai calcular a renda percápita das cidades;

    densdemo1 = pop1/area1; //A renda percápita é calculada através da divisão entre o número da população pela área total da cidade
    densdemo2 = pop2/area2; //A renda percápita é calculada através da divisão entre o número da população pela área total da cidade
    rendaper1 = pib1/pop1; //A densidade demográfica é calculada através da divisão entre o número do PIB pela quantidade de habitantes
    rendaper2 = pib2/pop2; //A densidade demográfica é calculada através da divisão entre o número do PIB pela quantidade de habitantes
    
    /* O programa vai ser dividido na captação de informações da primeira carta, na sequência da segunda e por fim 
    apresentar a informação das duas caras*/

    printf("Adicione os dados da primeira carta\n\n");
    printf("Digite o número da carta: \n"); //Solicita ao usuário que escreva a numeração da carta
    
    scanf("%d", &carta1); 
    /*Recebe a numeração através de um especificador do tipo inteiro no formato decimal, 
    armazena na variávei carta1 */

    
    printf("Digite o nome do Estado: \n"); //Solicita que o usuário insira o nome do estado referente a carta
   
    /*Recebe o nome do estado através de um especificador do tipo string de caracter */
    scanf("%s", estado1);

    printf("Digite o código da carta: \n"); //Solicita que o usuário insira o código da carta
    
    /*Recebe o código da carta através de um especificador do tipo string de caracter */
    scanf("%s", cod1);

    printf("Digite o nome da cidade: \n"); //Solicita que o usuário insira o nome da cidade
    
    /*Recebe o código da carta através de um especificador do tipo string de caracter */
    scanf("%s", nome1);
    
    printf("Digite a população: \n"); //Solicita que o usuário insira a quantidade da população
    
    /*Recebe o código da carta através de um especificador do tipo flutuante no formato padrão */
    scanf("%f", &pop1);

    printf("Digite a área: \n"); //Solicita que o usuário insira a área da cidade

    /*Recebe o código da carta através de um especificador do tipo flutuante no formato padrão */
    scanf("%f", &area1);

    printf("Digite o PIB: \n"); //Solicita que o usuário insira o PIB da cidade
    
   /*Recebe o código da carta através de um especificador do tipo flutuante no formato padrão */
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: \n"); //Solicita que o usuário insira o número de pontos turísticos
    scanf("%d", &numpt1); /*Recebe o código da carta através de um especificador do tipo inteiro formato decimal */
    
    /*Início da captação das informações da segunda carta*/

    printf("\n\nAdicione os dados da segunda carta\n\n");
    printf("Digite o número da carta: \n");
    scanf("%d", &carta2);

    printf("Digite o nome do Estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", cod2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2);
    
    printf("Digite a população: \n");
    scanf("%f", &pop2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numpt2);

    /* Impressão das informações das primeira e segunda carta respectivamente*/
    
    printf("\n\n\nCarta número %d", carta1);
    printf("\nEstado %s", estado1);
    printf("\nCódigo %s", cod1);
    printf("\nO nome da cidade é: %s", nome1);
    printf("\nO número da população é de: %f", pop1);
    printf("\nA área total é de: %.2f m²", area1);
    printf("\nO PIB da cidade é de: %.2f de reais", pib1);
    printf("\nO número de pontos turísticos é %d", numpt1);
    printf("\nA densidade demográfica de %s é %.2f Hab/m²", nome1, densdemo1);
    printf("\nA renda percápita de %s é de: %.2f R$/Hab", nome1, rendaper1);

    printf("\n\n\nCarta número %d", carta2);
    printf("\nEstado %s", estado2);
    printf("\nCódigo %s", cod2);
    printf("\nO nome da cidade é: %s", nome2);
    printf("\nO número da população é de: %.2f", pop2);
    printf("\nA área total é de: %.2f m²", area2);
    printf("\nO PIB da cidade é de: R$%.2f de reais", pib2);
    printf("\nO número de pontos turísticos é %d", numpt2);
    printf("\nA densidade demográfica de %s é %.2f Hab/Km²", nome2, densdemo2);
    printf("\nA renda percápita de %s é de: %.2f R$/Hab", nome2, rendaper2);

    return 0;
    }
