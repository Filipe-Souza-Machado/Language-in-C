/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n1 ;
    
    printf("Digite um valor: ");
    scanf("%i",&n1);//leia n1
    
    printf("\nNumero escolhido:%i",n1);
    
    n1 ++;// adiciona mais 1
    printf("\nDepois do incremento: %i",n1);
    
    n1 --;// subtrai 1
    printf("\nDepois do decremento: %i",n1);
    
    n1 += 4;// adiciona mais 4
    printf("\nDepois do incremento +4: %i",n1);
    
    n1 -=2 ;// retira 2
    printf("\nDepois do decremento -2: %i",n1);
    
    n1 *= 4;//multiplica por 4
    printf("\nDepois do multiplicador 4: %i",n1);
    
    n1 /= 6;// divide por 6
    printf("\nDepois do divisor 6: %i",n1);
    
    return 0;
}
