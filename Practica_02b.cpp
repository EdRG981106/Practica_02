#include<stdio.h>
#include<stdlib.h>

int main(){
    float a,b,c;
    char opt;

    printf("a.-Suma\nb.-Resta\nc.-Multiplicacion\nd.-Division");

    printf("\nSeleccione una opcion: ");
    opt = getchar();
    printf("\nIngrese el valor del primer operando: ");
    scanf("%f",&a);
    printf("\nIngrese el valor del segundo operando: ");
    scanf("%f",&b);

    switch(opt){
    case 'A':
    case 'a':
        c=a+b;
        break;
    case 'B':
    case 'b':
        c=a-b;
        break;
    case 'C':
    case 'c':
        c=a*b;
        break;
    case 'D':
    case 'd':
        while(b==0){
            printf("\nError, el segundo operando debe ser distinto de cero");
            printf("\nIngrese el valor del segundo operando: ");
            scanf("%f",&b);
        }
        c=a/b;
        break;
    default:
        printf("\nOpcion invalida");
        opt=='R';
    }
    if(opt!='R'){
    printf("\nEl resultado es: %0.2f",c);
    }
}

