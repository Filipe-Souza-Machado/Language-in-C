/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n1 , n2 , soma,subtr,mult,divi;
    
    printf("Digite um valor: ");
    scanf("%i",&n1);//leia n1
    
    printf("digite outro valor");
    scanf("%i",&n2)//leia n2;
    
    soma = n1 + n2 ;
    subtr = n1 - n2;
    mult = n1*n2;
    divi = n1 / n2;
    
    printf("\n%i + %i = %i",n1,n2,soma);
    printf("\n%i - %i = %i",n1,n2,subtr);
    printf("\n%i x %i = %i",n1,n2,mult);
    printf("\n%i : %i = %i",n1,n2,divi);
    return 0;
}
