#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
//Aluno Alex Passilongo

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char nome1[50] = "", estado1[50] = "", nome2[50] = "", estado2[50] = "";
    char populacao_str1[50] = "", area_str1[50] = "", pib_str1[50] = "", pontos_str1[50] = "";
    char populacao_str2[50] = "", area_str2[50] = "", pib_str2[50] = "", pontos_str2[50] = "";
    int num_ponto_turistico1, cod_cidade1, num_ponto_turistico2,cod_cidade2;
    unsigned long int populacao1, populacao2;
    float area1, pib1, pib_capita1, densidade1, SuperPoder1;
    float area2, pib2, pib_capita2, densidade2, SuperPoder2;
    int menu;
    int resultado1, resultado2;
    int primeiroAtributo, segundoAtributo;

    //int resultadoPop, resultadoArea, resultadoPib, resultadoPontos_tur, resultadoDensidade, resultadoPib_capita, resultadoSuperPoder;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
    printf("** CARTA 1 ** \n\n");

    printf("Digite o Estado de A a H: ");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = 0;

    printf("Codigo da cidade de 01 a 04: ");
    scanf("%d", &cod_cidade1);
    getchar();

    printf("Nome da cidade: ");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = 0;

    printf("Quantidade de Habitantes: ");
    fgets(populacao_str1, sizeof(populacao_str1), stdin);
    populacao1 = strtoul(populacao_str1, NULL, 10); 
    
    printf("Digite a area geométrica: ");
    fgets(area_str1, sizeof(area_str1), stdin);
    area1 = strtof(area_str1, NULL);

    printf("Digite o PIB: ");
    fgets(pib_str1, sizeof(pib_str1),stdin);
    pib1 = strtof(area_str1, NULL);

    printf("Digite o número de pontos turisticos: ");
    fgets(pontos_str1, sizeof(pontos_str1), stdin);
    num_ponto_turistico1 = atoi(pontos_str1);

    densidade1 = (area1 > 0) ? (float) populacao1 / area1 : 0;//impedindo divisão por 0
    pib_capita1 = (float) (pib1 * 1000000000) / populacao1;
    SuperPoder1 = populacao1 + area1 + pib1 + num_ponto_turistico1 + ((densidade1 > 0) ? (1 / densidade1) : 0) + pib_capita1; //Impede divisão por 0

   
    // CADASTRO DA CARTA 02

    printf("** CARTA 2 ** \n\n");

    printf("Digite o Estado de A a H: ");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = 0;

    printf("Codigo da cidade de 01 a 04: ");
    scanf("%d", &cod_cidade2);
    getchar();

    printf("Nome da cidade: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = 0;

    printf("Quantidade de Habitantes: ");
    fgets (populacao_str2, sizeof(populacao_str2), stdin);
    populacao2 = strtoul(populacao_str2, NULL, 10);

    printf("Digite a area geométrica: ");
    fgets(area_str2, sizeof(area_str2), stdin);
    area2 = strtof(area_str2, NULL);

    printf("Digite o PIB: ");
    fgets(pib_str2, sizeof(pib_str2), stdin);
    pib2 = strtof(pib_str2, NULL);

    printf("Digite o número de pontos turisticos: ");
    fgets(pontos_str2, sizeof(pontos_str2), stdin);
    num_ponto_turistico2 = atoi(pontos_str2);

    densidade2 = (densidade2 > 0) ? (float) populacao2 / area2 : 0;
    pib_capita2 = (float) (pib2 * 1000000000) / populacao2;
    SuperPoder2 = populacao2 + area2 + pib2 + num_ponto_turistico2 + ((densidade2 > 0) ? (1 / densidade2) : 0) + pib_capita2;


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    
    printf("\n\n** MENU DE COMPARAÇÃO DAS CARTAS **\n\n");
    printf("1. Comparar População.\n");
    printf("2. Comparar Area\n");
    printf("3. Comparar PIB\n");
    printf("4. Comparar Números de Pontos Turisticos\n");
    printf("5. Comparar Densidade demográfica\n\n");
    printf("DIGITE O PRIMEIRO ATRIBUTO DE COMPARARAÇÃO: ");

    /*fgets(primeiroAtributo, sizeof(primeiroAtributo), stdin);
    primeiroAtributo[strcspn(primeiroAtributo, "\n")] = 0;*/

    scanf("%d", &primeiroAtributo);

    switch (primeiroAtributo)
    {
    case 1:
        printf("Você escolheu comparar a População!\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
    {
        printf("Você escolheu comparar a Área!\n");
        resultado1 = area1 > area2 ? 1 : 0;
        break;
    }
    case 3:
    {
        printf("Você escolheu comparar o PIB!\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;
    }
    case 4:
    {
        printf("Você escolheu comparar os Pontos Turísticos!\n");
        resultado1 = num_ponto_turistico1 > num_ponto_turistico2 ? 1 : 0;
        break;
    }
    case 5:
    {
        printf("Você escolheu comparar a Densidade demografica!\n");
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        break;
    }
    
    default:
    {
        printf("Opção de jogo inválida!\n");
    }
        break;
    }

    printf("DIGITE O SEGUNDO ATRIBUTO DE COMPARARAÇÃO: ");

    /*fgets(segundoAtributo, sizeof(segundoAtributo), stdin);
    segundoAtributo[strcspn(segundoAtributo, "\n")] = 0;*/

    scanf("%d", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo)
    {
        printf("Você escolheu o mesmo atributo");
    } else{
    switch (segundoAtributo)
        {
    case 1:
        printf("Você escolheu comparar a População!\n");
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
    {
        printf("Você escolheu comparar a Área!\n");
        resultado2 = area1 > area2 ? 1 : 0;
        break;
    }
    case 3:
    {
        printf("Você escolheu comparar o PIB!\n");
        resultado2 = pib1 > pib2 ? 1 : 0;
        break;
    }
    case 4:
    {
        printf("Você escolheu comparar os Pontos Turísticos!\n");
        resultado2 = num_ponto_turistico1 > num_ponto_turistico2 ? 1 : 0;
        break;
    }
    case 5:
    {
        printf("Você escolheu comparar a Densidade demografica!\n");
        resultado2 = densidade1 < densidade2 ? 1 : 0;
        break;
    }
    
    default:
    {
        printf("Opção de jogo inválida!\n");
    }
        break;
        }

    }

    printf("Cheguei aqui");

    /*scanf("%d", &menu);
    getchar();
    switch (menu)
    {
    case 1:{
        printf("\n\n** Atributo: População **\n");
        printf("Carta 1 - %s: %lu habitantes\n", nome1, populacao1);
        printf("Carta 2 - %s: %lu habitantes\n", nome2, populacao2);
        
            if(populacao1 == populacao2){
            printf("Empate!");
            }else if (populacao1 > populacao2){
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            }
        }    
        break;
    
    case 2:{ 
        printf("\n** Atributo: Area/km² **\n");
        printf("Carta 1 - %s: %.2f km²\n", nome1, area1);
        printf("Carta 2 - %s: %.2f km²\n", nome2, area2);    

            if (area1 == area2){
                printf("Empate!");
            }else if (area1 > area2){
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            }else{
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            }
        }
        break;
            
    case 3:{
        printf("\n\n** Atributo: PIB **\n");
        printf("Carta 1 - %s: %f\n", nome1, pib1);
        printf("Carta 2 - %s: %f\n", nome2, pib2);
            
            if(pib1 == pib2){
                printf("Empate!");
            }else if (pib1 > pib2)
            {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            }else{
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            }
        }                   
        break;
            
    case 4:{
        printf("\n\n** Atributo: Pontos Turisticos **\n");
        printf("Carta 1 - %s: %d\n", nome1, num_ponto_turistico1);
        printf("Carta 2 - %s: %d\n", nome2, num_ponto_turistico2);    
        
            if (num_ponto_turistico1 == num_ponto_turistico2){
                printf("Empate!");
            } else if (num_ponto_turistico1 > num_ponto_turistico2){
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else{
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            };
        }  
        break;
            
    case 5:
        printf("\n\nComparação das cartas (Atributo: Densidade Populacional)\n");
        printf("Carta 1 - %s: %f\n", nome1, densidade1);
        printf("Carta 2 - %s: %f\n", nome2, densidade2);    
            
            if(densidade1 == densidade2){
                printf("Empate!");
            }else if (densidade1 < densidade2){
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            }else{
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            }    
            break;
                    
    default:
        printf("Número digitado incorreto!");
        break;
    }*/
    

    
    
    
    
    
    
 


  /*  printf("\n\nComparação das cartas (Atributo: PIB per Capita)\n");
    printf("Carta 1 - %s: %f\n", nome1, pib_capita1);
    printf("Carta 2 - %s: %f\n", nome2, pib_capita2);    
    
        if (pib_capita1 > pib_capita2)
        {
            printf("Resultado: Carta 1 (%s)venceu!\n", nome1);
        }else {
            printf("Resultado: Carta 2 (%s)venceu!\n", nome2);
        }
    
    printf("\n\nComparação das cartas (Atributo: Super Poder)\n");
    printf("Carta 1 - %s: %f\n", nome1, SuperPoder1);
    printf("Carta 2 - %s: %f\n", nome2, SuperPoder2);
    
        if (SuperPoder1 > SuperPoder2)
        {
            printf("Resultado: Carta 1 (%s)venceu!\n", nome1);
        } else {
            printf("Resultado: Carta 2 (%s)venceu!\n", nome2);
        }
    */
    
    
    
    
    
    


    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
