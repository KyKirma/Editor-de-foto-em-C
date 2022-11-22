#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    //Imagem colorida
    //P3
    int i, j, k, n;
    FILE *arquivo = fopen("imagem.ppm", "w");
    fprintf(arquivo, "P3\n");
    fprintf(arquivo, "# Autor: André\n");//comentario é opcional
    fprintf(arquivo, "5 10\n");
    fprintf(arquivo, "255\n");
    for(i=0; i<5; i++){
        for(j=0;j<10;j++){
            for(k=0;k<3;k++){
                n = rand() % 256;
                fprintf(arquivo, "%d ", n);
            }
            
        }
    }
    fclose(arquivo);
    return 0;
}