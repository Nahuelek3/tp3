/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    float peso;
    float altura;
    
    printf("ingrese el peso en kg: ");
    scanf("%f",&peso);
    
    printf("ingrese la altura en M: ");
    scanf("%f",&altura);
    
    float masa = peso / (altura * altura);
    printf("su undice de masa corporal es: %.2f\n ",masa); 
    
    printf("---------------------\n");
    printf("<18.5: peso bajo\n");
    printf("18.5 a 24.9: normal\n");
    printf("25 a 29.9:sobrepeso\n");
    printf(">=30: obesidad\n");
    printf("---------------------\n");
   
    return 0;
}
