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
    
void horizontal(FILE* foto){
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

void vertical(FILE* foto){
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

void metadevertical(FILE* foto){
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

void metadehorizontal(FILE* foto){
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

void cor_artificial(FILE* foto){
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

void rota_direita(FILE* foto){
    FILE *destino = fopen("R_direita.ppm", "w+");
    int linhas_imagem = 0, escala, pixel, colunas_imagem = 0, contador = 0;
    char buffer[250];
    fgets(buffer, 250, foto);
    fgets(buffer, 250, foto);
    fprintf(destino, "P3\n");
    fscanf(foto, "%d %d", &colunas_imagem, &linhas_imagem);
    fprintf(destino, "%d %d\n", colunas_imagem, linhas_imagem);
    fscanf(foto, "%d", &escala);
    fprintf(destino, "255\n");
    int matriz[colunas_imagem][linhas_imagem][3];
    for(int i = 0; i < linhas_imagem; i++){
        for(int j = 0; j < colunas_imagem; j++){
            for(int k = 0; k < 3; k++){
                fscanf(foto, "%d", &matriz[i][j][k]);
            }
        }
    }
    for(int i = 0; i < linhas_imagem; i++){
        for(int j = linhas_imagem; j > 0; j--){
            for(int k = 0; k < 3; k++){
                fprintf(destino, "%d ", matriz[j][i][k]);
            }
            fprintf(destino, "\n");
        }
    }
    printf("\nArquivo gerado!\n");
    fclose(destino);
}

void rota_esquerda(FILE* foto){
    FILE *destino = fopen("R_esquerda.ppm", "w");
    int linhas_imagem = 0, escala, pixel, colunas_imagem = 0, contador = 0;
    char buffer[250];
    fgets(buffer, 250, foto);
    fgets(buffer, 250, foto);
    fprintf(destino, "P3\n");
    fscanf(foto, "%d %d", &colunas_imagem, &linhas_imagem);
    fprintf(destino, "%d %d\n", colunas_imagem, linhas_imagem);
    fscanf(foto, "%d", &escala);
    fprintf(destino, "255\n");
    int matriz[colunas_imagem][linhas_imagem][3];
    for(int i = 0; i < linhas_imagem; i++){
        for(int j = 0; j < colunas_imagem; j++){
            for(int k = 0; k < 3; k++){
                fscanf(foto, "%d", &matriz[i][j][k]);
            }
        }
    }
    for(int i = 0; i < linhas_imagem; i++){
        for(int j = 0; j < colunas_imagem; j++){
            for(int k = 0; k < 3; k++){
                fprintf(destino, "%d ", matriz[j][i][k]);
            }
            fprintf(destino, "\n");
        }
    }
    printf("\nArquivo gerado!\n");
    fclose(destino);    
}

void part_cinza(FILE* foto){
    int i, j, k, colunas, linhas, vmax, a;
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
    FILE *parte_cinza = fopen("pedaco_cinza.ppm", "w+");
    fprintf(parte_cinza, "P3\n");
    fprintf(parte_cinza, "#Pedro\n");
    fprintf(parte_cinza, "%d %d\n", colunas, linhas);
    fprintf(parte_cinza, "%d\n", vmax);   
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            for(k = 0; k < 3; k++){
                if(i > j){
                    a = (matriz[i][j][0]+matriz[i][j][1]+matriz[i][j][2])/3;
                    fprintf(parte_cinza, "%d\n", a);
                }else{
                    fprintf(parte_cinza, "%d\n", (matriz[i][j][k]));
                }
            }
        }
    }
    printf("\nArquivo gerado!\n");
    fclose(parte_cinza);    
}

void rgb(FILE* foto){
    FILE *cor_vermelha = fopen("cor_vermelha.ppm", "w+");
    FILE *cor_verde = fopen("cor_verde.ppm", "w+");
    FILE *cor_azul = fopen("cor_azul.ppm", "w+");
    int linhas_da_imagem = 0, escala, coluna_da_imagem = 0, r, g, b;
    char buffer[250], tipo_imagem[2];
    fgets(buffer, 250, foto);
    fgets(buffer, 250, foto);
    fprintf(cor_vermelha, "P3\n");
    fprintf(cor_verde, "P3\n");
    fprintf(cor_azul, "P3\n");
    fscanf(foto, "%d", &linhas_da_imagem);
    fscanf(foto, "%d", &coluna_da_imagem);
    fprintf(cor_vermelha, "%d ", linhas_da_imagem);
    fprintf(cor_vermelha, "%d\n", coluna_da_imagem);
    fprintf(cor_verde, "%d ", linhas_da_imagem);
    fprintf(cor_verde, "%d\n", coluna_da_imagem);
    fprintf(cor_azul, "%d ", linhas_da_imagem);
    fprintf(cor_azul, "%d\n", coluna_da_imagem);
    fscanf(foto, "%d", &escala);
    fprintf(cor_vermelha, "255\n");
    fprintf(cor_verde, "255\n");
    fprintf(cor_azul, "255\n");
    for(int linhas = 0; linhas < linhas_da_imagem; linhas++) {
        for(int colunas = 0; colunas < coluna_da_imagem; colunas++) {
            fscanf(foto, "%d", &r);
            fscanf(foto, "%d", &g);
            fscanf(foto, "%d", &b);
            fprintf(cor_vermelha, "%d 0 0\n", r);
            fprintf(cor_verde, "0 %d 0\n", g);
            fprintf(cor_azul, "0 0 %d\n", b);
        }
    }
    printf("\nArquivos gerados!\n");
    fclose(cor_vermelha);
    fclose(cor_verde);
    fclose(cor_azul);
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
            case 7:
                rota_direita(foto);
                break;
            case 8:
                rota_esquerda(foto);
                break;
            case 9:
                part_cinza(foto);
                break;
            case 10:
                rgb(foto);
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