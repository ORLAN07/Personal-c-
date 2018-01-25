
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    int num1, num2, suma, multiplicacion, opcion;

    printf("Elija 1 si quiere sumar y 2 si quiere multipicar ");
    scanf("%d", &opcion);

    while(true){
        if(opcion == 1){
            printf("Bienvenido este es una suma ");
            printf("\n Ingrese un numero ");
            scanf("%d", &num1);
            printf("\n Ingrese otro numero ");
            scanf("%d", &num2);

            suma = num1 + num2;

            printf("\n la suma es: ");
            printf(" %d", suma);

            printf("\n enhorabuena esta usando buenos servicios, hasta pronto ");

    }else if(opcion == 2){
        printf("Bienvenido este es una multiplicacion ");
            printf("\n Ingrese un numero ");
            scanf("%d", &num1);
            printf("\n Ingrese otro numero ");
            scanf("%d", &num2);


            multiplicacion = num1 * num2;

            printf("\n la multiplicacion es: ");
            printf(" %d", multiplicacion);

            printf("\n enhorabuena esta usando buenos servicios, hasta pronto ");
    }
    }

    return 0;
}
