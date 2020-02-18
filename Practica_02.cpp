#include<stdio.h>
#include<stdlib.h>

int main(){
    float a,b,c;
    int opt;
    printf("1.-Suma\n2.-Resta\n3.-Multiplicacion\n4.-Division");
    printf("\nSeleccione una opcion: ");
    scanf("%d",&opt);
    printf("\nIngrese el valor del primer operando: ");
    scanf("%f",&a);
    printf("\nIngrese el valor del segundo operando: ");
    scanf("%f",&b);
    switch(opt){
    case 1:
        c=a+b;
        break;
    case 2:
        c=a-b;
        break;
    case 3:
        c=a*b;
        break;
    case 4:
        while(b==0){
            printf("\nError, el segundo operando debe ser distinto de cero");
            printf("\nIngrese el valor del segundo operando: ");
            scanf("%f",&b);
        }
        c=a/b;
        break;
    default:
        printf("\nOpcion invalida");
        c=0;
    }
    printf("El resultado es: %f",c);
}
