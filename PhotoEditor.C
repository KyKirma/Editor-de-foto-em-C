#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void colortogrey(FILE* foto){
    FILE *cnvt = fopen("rgb-to-grey.pgm", "w+");
    int i = 1, lin_foto = 0, col_foto = 0, r, g, b, med, k, j;
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
            fprintf(cnvt, "255\n");
        } else if (i > 3) {
            for(k = 0; k < lin_foto; k++){
                for(j = 0; j < col_foto; j++){
                    fscanf(foto, "%d", &r);
                    fscanf(foto, "%d", &g);
                    fscanf(foto, "%d", &b);
                    med = (r + g + b)/3;
                    fprintf(cnvt, "%d\n", med);
                }
            }
        }
    }
    fclose(cnvt);
    printf("\nArquivo gerado com sucesso.\n");
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

    while(i == 0){

        printf("\nSelecione as opcoes de edicao:\n1. Converter uma imagem colorida para escala de cinza.\n2. Fechar o Programa.\n");
        scanf("%d", &c);

        switch (c){
            case 1:
                colortogrey(foto);
                break;
            default:
                printf("tenta dnv");
                break;
            case 2:
                printf("\nObrigado por usar o programa.\n");
                i = 1;
                break;
        }
    }
}