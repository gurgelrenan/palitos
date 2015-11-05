//
//  main.c
//  palitos
//
//  Created by Renan Gurgel on 11/4/15.
//  Copyright © 2015 vitoria. All rights reserved.
//

#include <stdio.h>

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
        printf("Posicao %d: ", i);
        printf("%d", numberArray[i]);
        printf("\n");
        sum = sum + numberArray[i];
    }
    
    int sum_matricula = sum;
    
    printf("A soma da sua matricula é: %d \n", sum_matricula);
	
//	fim soma matricula
	
    return 0;
}
