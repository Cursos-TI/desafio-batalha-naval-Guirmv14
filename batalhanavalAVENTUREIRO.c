#include <stdio.h>

int main(){

    //Declaração da matriz
    int tabuleiro [10][10];

    // Preenchendo o tabuleiro com zeros
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro [i][j] = 0; //Define zero em todas as posições
        }
    }
    
    // Barco na horizontal
    for (int i = 3; i < 6; i++) {
        tabuleiro [i][9] = 3;
    }

    // Barco na vertical
    for (int i = 2; i < 5; i++) {
        tabuleiro [6][i] = 3;
    }

    //barco diagonal principal 
    for (int i = 0; i < 10; i++) {
        if((i > 2)&&(i < 6)){
            tabuleiro[i][i] = 3;
        }
    }

    //barco diagonal secundária
    for (int i = 0; i < 10; i++){
        if((i > 0) && (i < 4))
        {
            tabuleiro[i][9-1]=3;
        }
    }
    

    // Cabeçalho das colunas (letras)
    printf("   ");
    for (int j = 'a'; j <= 'j'; j++) {
        printf("%c ", j);
    }
    printf("\n");
    
    // Impressão do tabuleiro completo
    for (int i = 0; i < 10; i++) {
        // Linhas numeradas com alinhamento
        if (i < 9) {
            printf(" ");
        }
        printf("%d ", i + 1);

        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}