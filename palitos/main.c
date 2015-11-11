//
//  main.c
//  palitos
//
//  Created by Renan Gurgel on 11/4/15.
//  Copyright © 2015 vitoria. All rights reserved.
//

#include <stdio.h>
int is_par(int number);
void jogo_par_ou_impar();
void jogo_nim();


int main(int argc, const char * argv[]) {
    int matricula;
    printf("Digite sua matrícula: \n");
    scanf("%d",&matricula);
    
//   Comecar a transformar um inteiro em um array
    /* count number of digits */
    int c = 0; /* digit position */
    int n = matricula;
    
    while (n != 0)
    {
        n /= 10;
        c++;
    }
    
    int numberArray[c];
    
    c = 0;
    n = matricula;
    
    /* extract each digit */
    while (n != 0)
    {
        numberArray[c] = n % 10;
        n /= 10;
        c++;
    }
    
//    finaliza a transformacao de um inteiro em um array

//	Comeca a mostrar a soma da matricula
    int i;
    int sum = 0;
    
    for (i=0;i<c;i++) {
//        printf("Posicao %d: ", i);
//        printf("%d", numberArray[i]);
//        printf("\n");
        sum = sum + numberArray[i];
    }
    
    int sum_matricula = sum;
    
    printf("A soma da sua matricula é: %d \n", sum_matricula);
	
//	fim soma matricula
	
	if (is_par(sum_matricula) == 1) {
		jogo_par_ou_impar();
		return 0;
	} else {
		jogo_nim();
	}
	
	return 0;
}

int is_par(int number) {
	if (number % 2 == 0) {
		return 1;
	} else {
		return 0;
	}
}

void jogo_par_ou_impar() {
	printf("Comecando Jogo par ou impar.....\n");
	int qtd_palitos = 15;
	int qtd_para_remover = 0;
	int i;
	int jogadores[2];
	char nome_jogador1[30];
	char nome_jogador2[30];
	
	printf("Nome jogador 1: ");
	scanf("%s",nome_jogador1);
	printf("Bem vindo %s. \n",nome_jogador1);

	
	printf("Nome jogador 2: ");
	scanf("%s",nome_jogador2);
	printf("Bem vindo %s. \n",nome_jogador2);

	
//	inicializar array dos jogadores com zero palitos em cada
	for (i = 0;i < 2; i++){
		jogadores[i] = 0;
	}
	
	while (qtd_palitos > 0) {
		printf("Digite quantos palitos deseja remover: \n");
		scanf("%d",&qtd_para_remover);
		
	    // verifica se pediu para tirar menos q 4 palitos e pelo menos 1
		if (qtd_para_remover < 1 || qtd_para_remover > 3) {
			printf("Remova de 1 a 3 palitos \n");
		} else
		// verifica se a quantidade que o jogador quer tirar, ainda pode ser tirada
		if ((qtd_palitos - qtd_para_remover) < 0 ) {
			printf("Voce pode remover apenas %d palito(s) \n", qtd_palitos);
		} else {
			printf("Removendo %d palitos \n", qtd_para_remover);
			qtd_palitos = qtd_palitos - qtd_para_remover;
			printf("Restam %d palitos \n", qtd_palitos);
			qtd_para_remover = 0;
		}
	}
	
	printf("-----------------Fim do jogo!-------------------------");
	
}

void jogo_nim() {
	printf("jogo nim");
}
