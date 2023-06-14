#include <stdio.h>
#include <stdlib.h>

main(){
    for(;;){
        int vValor;
        printf("Digite um valor\n");
        scanf("%d", &vValor);

        int v100 = vValor / 100;
        vValor = vValor - v100 * 100;

        int v50 = vValor / 50;
        vValor = vValor - v50 * 50;

        int v20 = vValor / 20;
        vValor = vValor - v20 * 20;

        int v10 = vValor / 10;
        vValor = vValor - v10 * 10;

        int v5 = vValor / 5;
        vValor = vValor - v5 * 5;

        int v2 = vValor / 2;
        vValor = vValor - v2 * 2;

        int v1 = vValor;

        printf("O numero de notas de 100 e: %d\n", v100);
        printf("O numero de notas de 50 e: %d\n", v50);
        printf("O numero de notas de 20 e: %d\n", v20);
        printf("O numero de notas de 10 e: %d\n", v10);
        printf("O numero de notas de 5 e: %d\n", v5);
        printf("O numero de notas de 2 e: %d\n", v2);
        printf("O numero de notas de 1 e: %d\n", v1);

        printf("Deseja rodar o programa novamente? S/N\n");
        getchar();
        char resp = getchar();
        if(resp=='n' || resp=='N'){
            break;
        }
    }
}
