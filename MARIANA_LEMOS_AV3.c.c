#include <stdio.h>

void trocavalor(int v1[], int v2[]); // ordena a inser��o do vetor e realiza troca

int main(){

    //Solicita a quantidade de pa�ses
    int paises;
    printf("Digite quantos paises voce quer incluir no quadro de medalhas:\n");
    scanf("%i", &paises);

    int i,j; // i = linhas, j = colunas

    int pontos, ouros, pratas, bronzes;

    //Inicia o vetor com a quantidade de pa�ses
    int M[paises][5];

    M[i][0] = paises;
    M[i][1] = pontos;
    M[i][2] = ouros;
    M[i][3] = pratas;
    M[i][4] = bronzes;

    for (i=0; i<paises; i++){ //
        int paises, ouros, pratas, bronzes;
        paises = i+1;

        M[i][0] = paises;

       //C�lculo da pontua��o (e pontos � igual a matriz colocada abaixo)
        M[i][1] = (5*ouros) + (3*pratas) + (1*bronzes);

        printf("Digite o numero de ouros do pais %d:\n", paises);
        scanf("%i", &ouros);

        M[i][2] = ouros;

        printf("Digite o numero de pratas do pais %d:\n", paises);
        scanf("%i", &pratas);

        M[i][3] = pratas;

        printf("Digite o numero de bronzes do pais %d:\n", paises);
        scanf("%i", &bronzes);

        M[i][4] = bronzes;

    }

    int AuxTroca[5]; // 5 porque � o n�mero de colunas que temos de acordo com os n�meros inseridos

    for (i=0; i<paises; i++){
        for (j=i+1; j<paises; j++){
            if (M[i][1] < M[j][1]){

                trocavalor (AuxTroca, M[i]);

                trocavalor (M[i], M[j]);

                trocavalor (M[j], AuxTroca);
            }
        }
    }

    printf("Quadro de medalhas ponderado:\n\n");

    for (i=0; i<paises; i++){ // condi��o desse loop para gerar a matriz final
        printf("Pais %i Pontos %i Ouros %i Pratas %i Bronzes %i \n \n", M[i][0], M[i][1], M[i][2], M[i][3], M[i][4]); // armazena valores numa matriz em forma sequencial
    }
    return 0;
}

void trocavalor (int v1[], int v2[]){
    int cont; // para continuar a contagem que satisfa�a a condi��o nesse loop

    for(cont=0; cont<5; cont++){
        v1[cont] = v2[cont];
    }
}
