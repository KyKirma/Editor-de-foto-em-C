#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void colortogrey(FILE* foto){
    int i, j, k, colunas, linhas, vmax, media;
    char buffer[250];
    fgets(buffer, 250, foto);
    fgets(buffer, 250, foto);
    fscanf(foto, "%d %d", &colunas, &linhas);
    int matriz[linhas][colunas][3];
    fscanf(foto, "%d", &vmax);
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            for(k = 0; k < 3; k++){
                fscanf(foto, "%d", &matriz[i][j][k]);
            }
        }
    }
    FILE *escaladecinza = fopen("escaladecinza.ppm", "w+");
    fprintf(escaladecinza, "P3\n\n");
    fprintf(escaladecinza, "%d %d\n", colunas, linhas);
    fprintf(escaladecinza, "%d\n", vmax);
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            media = (matriz[i][j][0] + matriz[i][j][1] + matriz[i][j][2])/3;
            fprintf(escaladecinza, "%d ", media);
            fprintf(escaladecinza, "%d ", media);
            fprintf(escaladecinza, "%d ", media);
        }
    }
    printf("\nArquivo gerado!\n");
    fclose(escaladecinza);
}

int main(void){
    int c, i;
    char arq[50];

    printf("Bem vindo ao menu do PhotoEditor, selecione o arquivo:\n");
    scanf("%s", arq);
    FILE *foto = fopen(arq, "r+");

    //verificação de arquivo
    while(foto == NULL){
        printf("\nErro ao tentar abrir, tente novamente:\n");
        scanf("%s", arq);
        foto = fopen(arq, "r+");
    }
    
    while (i != 0){
        printf("\nSelecione as opcoes de edicao:\n1. Converter uma imagem colorida para escala de cinza.\n2. Fechar o programa.\n");
        scanf("%d", &c);

        switch (c){
            case 1:
                colortogrey(foto);
                break;
            case 2:
                printf("Obrigado por usar o programa.\n");
                i = 0;
                break;
            default:
                printf("tenta dnv");
                break;
        }
    }
}