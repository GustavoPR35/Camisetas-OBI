#include <stdio.h>

//void printteste(int *vet, int n) {
//    int i;
//    for (i = 0; i < n; i++) {
//        printf("%d ", vet[i]);
//    }
//    printf("\n");
//}

void comparacao(int *vet, int cp, int cm, int n) {

    int *cont = vet;
    int totalP = 0, totalM = 0;
    int i;

    for (i = 0; i < n; i++) {
        if (*cont == 1) {
            totalP++;
        }
        else if (*cont == 2) {
            totalM++;
        }
        cont++;
    }

    if (totalP == cp && totalM == cm) {
        //printf("quantidades certas produzidas");
        printf("S");
    }
    else {
        //printf("quantidades certas nao foram produzidas");
        printf("N");
    }
}

int main(){

    int n, camisetasP, camisetasM;
    //printf("numero de premiados: ");
    scanf("%d", &n);
    
    int escolhas[n];

    for (int i = 0; i < n; i++) {
        //printf("escolha o tamanho do premiado %d (1 pequena, 2 medio): ", i+1);
        scanf("%d", &escolhas[i]);
    }

//    printteste(escolhas, n);

    //printf("informe o numero de camisetas pequenas produzidas: ");
    scanf("%d", &camisetasP);
    //printf("informe o numero de camisetas medias produzidas: ");
    scanf("%d", &camisetasM);

    comparacao(escolhas, camisetasP, camisetasM, n);

return 0;
}