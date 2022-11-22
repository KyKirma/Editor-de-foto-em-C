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
    
int horizontal(FILE* foto){
    int i, j, k, colunas, linhas, vmax;
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
    FILE *horizontal = fopen("horizontal.ppm", "w+");
    fprintf(horizontal, "P3\n\n");
    fprintf(horizontal, "%d %d\n", colunas, linhas);
    fprintf(horizontal, "%d\n", vmax);
    for(i = 0; i < linhas; i++){
        for(j = colunas - 1; j >= 0; j--){
            for(k = 0; k < 3; k++){
                fprintf(horizontal, "%d\n", matriz[i][j][k]);
            }
        }
    }
    printf("\nArquivo gerado!\n");
    fclose(horizontal);
}

int vertical(FILE* foto){
    int i, j, k, colunas, linhas, vmax;
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
    FILE *vertical = fopen("vertical.ppm", "w+");
    fprintf(vertical, "P3\n\n");
    fprintf(vertical, "%d %d\n", colunas, linhas);
    fprintf(vertical, "%d\n", vmax);
    for(i = linhas - 1; i >= 0; i--){
        for(j = 0; j < colunas; j++){
            for(k = 0; k < 3; k++){
                fprintf(vertical, "%d\n", matriz[i][j][k]);
            }
        }
    }
    printf("\nArquivo gerado!\n");
    fclose(vertical);
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
        printf("\n\nSelecione as opcoes:\n");
        printf("\n1 - Converter uma imagem colorida para escala de cinza");
        printf("\n2 - Espelhar uma imagem horizontalmente");
        printf("\n3 - Espelhar uma imagem verticalmente");
        printf("\n4 - Dividir uma imagem em dois arquivos (um arquivo com a metade esquerda, e outro arquivo com a metade direita)");
        printf("\n5 - Dividir uma imagem em dois arquivos (um arquivo com a metade superior, e outro arquivo com a metade inferior)");
        printf("\n6 - Colorir uma imagem artificialmente");
        printf("\n7 - Rotacionar uma imagem 90 graus para a direita");
        printf("\n8 - Rotacionar uma imagem 90 graus para a esquerda");
        printf("\n9 - Gerar uma imagem copia da original, porém com uma parte da imagem em escala de cinza");
        printf("\n10 - Gerar tres arquivos de saida. Um para cada camada (R, G e B)");
        printf("\n11 - Sair do programa\n");
        scanf("%d", &c);

        switch (c){
            case 1:
                colortogrey(foto);
                break;
            case 2:
                horizontal(foto);
                break;
            case 3:
                vertical(foto);
                break;
            case 11:
                printf("Obrigado por usar o programa.\n");
                i = 0;
                break;
            default:
                printf("Comando desconhecido, tente novamente.\n");
                break;
        }
    }
    fclose(foto);
}