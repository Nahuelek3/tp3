/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
float calcularPerimetroCirculo( float a){
    float r = (a*2)*3.1415;
    return r;
}

float calcularAreaCirculo( float a){
    float r = (a*a)*3.1415;
    return r;
}

float calcularDiagonalRectangulo( float a, float b){
    float n = (a*a) + (b*b);
    float r = sqrt(n);
    return r;
}
float calcularPerimetroRectangulo( float a, float b){
    float r = (a+b)*2;
    return r;
}
float calcularAreaRectangulo( float a, float b){
    float r = a*b;
    return r;
}

void imprimirResultados (float a, float b){
    printf("el area es: %.3f\n",a);
    printf("el perimetro es: %.3f\n",b);
}

int main(void)
{
    int n;
    float l, a, r;
    
    do{
    printf("seleccine la forma a calcular \n (1: rectangulo, 2: circulo)\n");
    scanf("%d",&n);
    
    if(n < 1 || n > 2 ){
        printf("seleccion invalida\n\n");
    }
    }while(n < 1 || n > 2);
    
    if(n == 1){
        
        printf("ustend selecciono rectangulo\ningrese longitud: ");
        scanf("%f",&l);
        printf("ingrese la altura: ");
        scanf("%f",&a);
        printf("\n");
        
        float perir = calcularPerimetroRectangulo( l, a);
        float arear = calcularAreaRectangulo( l, a);
        float diagr = calcularDiagonalRectangulo( l, a);
        
        
        imprimirResultados(perir, arear);
        printf("la diagonal mide: %.3f\n",diagr);
        
    }
    if(n == 2){
        
        printf("ustend selecciono circulo\ningrese radio: ");
        scanf("%f",&r);
        
        float areac = calcularAreaCirculo(r);
        float peric = calcularPerimetroCirculo(r);
        
        imprimirResultados(peric, areac);
    }
    
    return 0;
}
