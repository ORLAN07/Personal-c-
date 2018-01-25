#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int temp;
    printf("Este es yun programa que mide la posicion de la temperatura\n");
    printf("Ingrese la temperatura");
    printf("\n");
    scanf("%d", &temp);
    if(temp <= 15){
        printf("Frio");
    }else if(temp > 15 && temp <= 25){
        printf("clima templado");
    }else{
        printf("Clima caluroso");
        printf("\n");
    }



}
