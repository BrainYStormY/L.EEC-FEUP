#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

void imprimeTabuleiro(char tabuleiro[LINHAS][COLUNAS]) {
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf(" %c ",tabuleiro[i][j]);
            if(j<2){printf("|");}
            else{printf("\n");}
        }
        if(i<2){printf("---+---+---\n");}
    }
}

int haVencedor(char tabuleiro[LINHAS][COLUNAS]) {
    int i=0, j=0;
    for(i=0; i<3; i++){if(tabuleiro[i][0]==tabuleiro[i][1]&&tabuleiro[i][0]==tabuleiro[i][2]){return 1;}}
    for(j=0; j<3; j++){if(tabuleiro[0][j]==tabuleiro[1][j]&&tabuleiro[0][j]==tabuleiro[2][j]){return 1;}}
    i=0, j=0;
    if(tabuleiro[i][j]==tabuleiro[i+1][j+1]&&tabuleiro[i][j]==tabuleiro[i+2][j+2]){return 1;}
    if(tabuleiro[i+2][j]==tabuleiro[j+1][i+1]&&tabuleiro[i+2][j]==tabuleiro[i][j+2]){return 1;}
    return 0;
}

int main() {
	int vencedor = 0;
	int escolha = 0;
	int linha = 0;
	int coluna = 0;
	int i;

	char tabuleiro[LINHAS][COLUNAS] = {
		{'1','2','3'},
		{'4','5','6'},
		{'7','8','9'}
	};

	for (i = 0; i<9 && !vencedor; i++) {
		int jogador = i%2 + 1;
		imprimeTabuleiro(tabuleiro);

		do {
			printf("\nJogador %d, introduza o numero do quadrado "
				"onde quer colocar o seu %c ",
				jogador,(jogador==1)?'X':'O');
			scanf("%d", &escolha);

			linha = --escolha/3;
			coluna = escolha%3;
		} while(escolha<0 || escolha>9 || tabuleiro [linha][coluna]>'9');

		tabuleiro[linha][coluna] = (jogador == 1) ? 'X' : 'O';
		if (haVencedor(tabuleiro)) { vencedor = jogador; }
	}
	
	imprimeTabuleiro(tabuleiro);

	if(!vencedor) {
		printf("Empate\n");
	} else {
		printf("O Jogador %d venceu\n", vencedor);
	}

	return 0;
}