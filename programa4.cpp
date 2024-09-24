#include<stdio.h>
int main()
{
	int constante1, constante2, constante3, constante4, resultado;
	printf("intruzca el valor de los numeros a sumar:\n");
	scanf_s("%i %i %i %i", &constante1, &constante2, &constante3, &constante4);
	resultado = constante1 + constante2 + constante3 + constante4;
	printf(" la suma total de los cuatro numeros es: %i", resultado);
	return 0;


}