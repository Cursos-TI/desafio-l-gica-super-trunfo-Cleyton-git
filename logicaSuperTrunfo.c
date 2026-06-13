#include <stdio.h>

int main(){
    char estado[21], estado2[21];
    char codigo_carta[10], codigo_carta2[10];
    char nome_cidade[32], nome_cidade2[32];
    int populacao, pontos_turisticos, populacao2, pontos_turisticos2;
    float area_km, pib, densidade_populacional, pib_per_capita, area_km2, pib2, densidade_populacional2, pib_per_capita2;
    float super_poder, super_poder2;

    printf("----------SUPER TRUNFO----------\n");
    printf("Digite o ESTADO: ");
    scanf("%s", estado);
    printf("Digite o codigo da carta: ");
    scanf("%s", codigo_carta);
    printf("Digite o nome de uma cidade do estado: ");
    scanf("%s", nome_cidade);
    printf("Digite a população do estado: ");
    scanf("%i", &populacao);
    printf("Digite o numero de pontos turisticos do estado: ");
    scanf("%i", &pontos_turisticos);
    printf("Digite a area do estado em KM: ");
    scanf("%f", &area_km);
    printf("Digite o PIB do estado: ");
    scanf("%f", &pib);

    densidade_populacional = (float) populacao / area_km;
    pib_per_capita = pib / (float) populacao;
    super_poder = populacao + (int) area_km + (int) pib + pontos_turisticos + pib_per_capita + (int) (1 / densidade_populacional);

    printf("O estado é %s\n", estado);
    printf("O codigo da carta é %s\n", codigo_carta);
    printf("O nome de uma cidade é %s\n", nome_cidade);
    printf("A população do estado é %i\n", populacao);
    printf("O estado tem %i pontos turisticos\n", pontos_turisticos);
    printf("O estado tem %.2fKM de area\n", area_km);
    printf("O PIB do estado é de %.2f\n", pib);
    printf("A densidade populacional do estado é de %.2f\n", densidade_populacional);
    printf("O pib per capita do estado é de %.2f\n", pib_per_capita);
    printf("O super poder dessa carta é: %.0f\n", super_poder);

    printf("Digite o ESTADO: ");
    scanf("%s", estado2);
    printf("Digite o codigo da carta: ");
    scanf("%s", codigo_carta2);
    printf("Digite o nome de uma cidade do estado: ");
    scanf("%s", nome_cidade2);
    printf("Digite a população do estado: ");
    scanf("%i", &populacao2);
    printf("Digite o numero de pontos turisticos do estado: ");
    scanf("%i", &pontos_turisticos2);
    printf("Digite a area do estado em KM: ");
    scanf("%f", &area_km2);
    printf("Digite o PIB do estado: ");
    scanf("%f", &pib2);

    densidade_populacional2 = (float) populacao2 / area_km2;
    pib_per_capita2 = pib2 / (float) populacao2;
    super_poder2 = populacao2 + (int) area_km2 + (int) pib2 + pontos_turisticos2 + pib_per_capita2 + (int) (1 / densidade_populacional2);

    printf("O estado é %s\n", estado2);
    printf("O codigo da carta é %s\n", codigo_carta2);
    printf("O nome de uma cidade é %s\n", nome_cidade2);
    printf("A população do estado é %i\n", populacao2);
    printf("O estado tem %i pontos turisticos\n", pontos_turisticos2);
    printf("O estado tem %.2fKM de area\n", area_km2);
    printf("O PIB do estado é de %.2f\n", pib2);
    printf("A densidade populacional do estado é de %.2f\n", densidade_populacional2);
    printf("O pib per capita do estado é de %.2f\n", pib_per_capita2);
    printf("O super poder dessa carta é: %.0f\n", super_poder2);

    int escolha;
    printf("Você quer comparar os poderes usando qual atributo?\n1.População\n2.Super_poder\n3.PIB");
    scanf("%i", &escolha);
    switch (escolha){
        case 1:
            if (populacao > populacao2){
                printf("Com base na população o estado de %s ganhou!", estado);
            }
            else if (populacao2 > populacao){
                printf("Com base na população o estado de %s ganhou!", estado2);
            }
            else {
                printf("Os estados tem população igual, houve um impate!!");
            }
            break;
        case 2:
            if (super_poder > super_poder2){
                printf("Com base no super poder o estado de %s ganhou!", estado);
            }
            else if (super_poder2 > super_poder){
                printf("Com base no super poder o estado de %s ganhou!", estado2);
            }
            else {
                printf("Os estados tem super poder igual, houve um impate!!");
            }
            break;
        case 3:
            if (pib > pib2){
                printf("Com base no PIB o estado de %s ganhou!", estado);
            }
            else if (pib > pib2){
                printf("Com base no PIB o estado de %s ganhou!", estado2);
            }
            else {
                printf("Os estados tem PIB igual, houve um impate!!");
            }
            break;
    }

    
    return 0;
}
