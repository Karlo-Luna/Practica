#include <stdio.h>
int main(){
    int edad;
    printf("¿Qué edad tienes?\n");
    scanf_s("%i",&edad);
    if(edad>=18){
        printf("Ya tienes edad para votar y para hacer cosas indebidas");
    } else{
        printf("Todavía estas chamaco, regresa al kinder y vuelve a intentarlo cuando tengas INE");
    }
}
