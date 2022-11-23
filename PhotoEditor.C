#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int colortogrey(FILE* foto){
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
    fprintf(escaladecinza, "#Pedro\n");
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
    fprintf(horizontal, "P3\n");
    fprintf(horizontal, "#Pedro\n");
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
    fprintf(vertical, "P3\n");
    fprintf(vertical, "#Pedro\n");
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

int metadevertical(FILE* foto){
    int i, j, k, colunas, linhas, vmax;
    int a,b,c;
    a = linhas/2;
    b = colunas/2;
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
    FILE *metadeesquerda = fopen("metadeesquerda.ppm", "w+");
    fprintf(metadeesquerda, "P3\n");
    fprintf(metadeesquerda, "#Pedro\n");
    fprintf(metadeesquerda, "%d %d\n", colunas/2, linhas);
    fprintf(metadeesquerda, "%d\n", vmax);
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas/2; j++){
            for(k = 0; k < 3; k++){
                fprintf(metadeesquerda, "%d\n", (matriz[i][j][k]));
            }
        }
    }
    FILE *metadedireita = fopen("metadedireita.ppm", "w+");
    fprintf(metadedireita, "P3\n");
    fprintf(metadedireita, "#Pedro\n");
    fprintf(metadedireita, "%d %d\n", colunas/2, linhas);
    fprintf(metadedireita, "%d\n", vmax);
    for(i = 0; i < linhas; i++){
        for(j = colunas/2; j < colunas; j++){
            for(k = 0; k < 3; k++){
                fprintf(metadedireita, "%d\n", (matriz[i][j][k]));
            }
        }
    }
    printf("\nArquivos gerados!\n");
    fclose(metadeesquerda);
    fclose(metadedireita);
}

int metadehorizontal(FILE* foto){
    int i, j, k, colunas, linhas, vmax;
    int a,b,c;
    a = linhas/2;
    b = colunas/2;
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
    FILE *metadesuperior = fopen("metadesuperior.ppm", "w+");
    fprintf(metadesuperior, "P3\n");
    fprintf(metadesuperior, "#Pedro\n");
    fprintf(metadesuperior, "%d %d\n", colunas, linhas/2);
    fprintf(metadesuperior, "%d\n", vmax);
    for(i = 0; i < linhas/2; i++){
        for(j = 0; j < colunas; j++){
            for(k = 0; k < 3; k++){
                fprintf(metadesuperior, "%d\n", (matriz[i][j][k]));
            }
        }
    }
    FILE *metadeinferior = fopen("metadeinferior.ppm", "w+");
    fprintf(metadeinferior, "P3\n");
    fprintf(metadeinferior, "#Pedro\n");
    fprintf(metadeinferior, "%d %d\n", colunas, linhas/2);
    fprintf(metadeinferior, "%d\n", vmax);
    for(i = linhas/2; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            for(k = 0; k < 3; k++){
                fprintf(metadeinferior, "%d\n", (matriz[i][j][k]));
            }
        }
    }
    printf("\nArquivos gerados!\n");
    fclose(metadesuperior);
    fclose(metadeinferior);
}

int cor_artificial(FILE* foto){
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
    FILE *escalacinza = fopen("escaladecinza.ppm", "w+");
    fprintf(escalacinza, "P3\n");
    fprintf(escalacinza, "#Pedro\n");
    fprintf(escalacinza, "%d %d\n", colunas, linhas);
    fprintf(escalacinza, "%d\n", vmax);
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            media = (matriz[i][j][0] + matriz[i][j][1] + matriz[i][j][2])/3;
            fprintf(escalacinza, "%d ", media);
            fprintf(escalacinza, "%d ", media);
            fprintf(escalacinza, "%d ", media);
        }
    }
    FILE *artificial = fopen("cor_artificial.ppm", "w+");
    fprintf(artificial, "P3\n");
    fprintf(artificial, "#Pedro\n");
    fprintf(artificial, "%d %d\n", colunas, linhas);
    fprintf(artificial, "%d\n", vmax);
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            if(matriz[i][j][0] == 255){
                fprintf(artificial, "%d %d %d ", 255, 255, 255);
            }else if(matriz[i][j][0] < 43){
                fprintf(artificial, "%d %d %d ", 252, 3, 202);
            }else if(matriz[i][j][0] > 42 && matriz[i][j][0] < 85){
                fprintf(artificial, "%d %d %d ", 3, 252, 248);
            }else if(matriz[i][j][0] > 84 && matriz[i][j][0] < 127){
                fprintf(artificial, "%d %d %d ", 57, 252, 3);
            }else if(matriz[i][j][0] > 126 && matriz[i][j][0] < 169){
                fprintf(artificial, "%d %d %d ", 252, 3, 3);
            }else if(matriz[i][j][0] > 168 && matriz[i][j][0] < 211){
                fprintf(artificial, "%d %d %d ", 252, 186, 3);
            }else if(matriz[i][j][0] > 210 && matriz[i][j][0] < 255){
                fprintf(artificial, "%d %d %d ", 252, 244, 3);
            }
        }
    }
    printf("\nArquivos gerados!\n");
    fclose(escalacinza);
    fclose(artificial);
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
        FILE *foto = fopen(arq, "r+");
        printf("\nSelecione as opcoes:\n");
        printf("\n1 - Converter uma imagem colorida para escala de cinza");
        printf("\n2 - Espelhar uma imagem horizontalmente");
        printf("\n3 - Espelhar uma imagem verticalmente");
        printf("\n4 - Dividir uma imagem em dois arquivos (um arquivo com a metade esquerda, e outro arquivo com a metade direita)");
        printf("\n5 - Dividir uma imagem em dois arquivos (um arquivo com a metade superior, e outro arquivo com a metade inferior)");
        printf("\n6 - Colorir uma imagem artificialmente");
        printf("\n7 - Rotacionar uma imagem 90 graus para a direita");
        printf("\n8 - Rotacionar uma imagem 90 graus para a esquerda");
        printf("\n9 - Gerar uma imagem copia da original, porem com uma parte da imagem em escala de cinza");
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
            case 4:
                metadevertical(foto);
                break;
            case 5:
                metadehorizontal(foto);
                break;
            case 6:
                cor_artificial(foto);
                break;
            case 11:
                printf("Obrigado por usar o programa.\n");
                i = 0;
                break;
            default:
                printf("Comando desconhecido, tente novamente.\n");
        }
    }
    fclose(foto);
}