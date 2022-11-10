#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void colortogrey(FILE* foto){
    FILE *cnvt = fopen("rgb-to-grey.png", "w+");
    int i = 1, lin_foto = 0, col_foto = 0, r, g, b, med;
    char buffer[250];
    fprintf(cnvt, "P2\n\n");
    
    while(!feof(foto)){
        i++;
        fgets(buffer, 250, foto);
        if (i = 3) {
            fscanf(foto, "%d", &lin_foto);
            fscanf(foto, "%d", &col_foto);
            fprintf(cnvt, "%d ", lin_foto);
            fprintf(cnvt, "%d\n", col_foto);
        } else if (i > 3) {
            fscanf(foto, "%d", &r);
            fscanf(foto, "%d", &g);
            fscanf(foto, "%d", &b);
            med = (r + g + b)/3;
            fprintf(cnvt, "%d\n", med);
        }
    }
    fclose(cnvt);
}

int main(void){
    int c;
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
    printf("\nSelecione as opções de edição:\n1. Converter uma imagem colorida para escala de cinza.");
    scanf("%d", &c);

    switch (c){
        case 1:
            colortogrey(foto);
            break;
        default:
            printf("tenta dnv");
            break;
    }
}