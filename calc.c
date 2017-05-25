#include <stdio.h>
#include <stdlib.h>

int soma (int x, int y) {
	//alteração feita na branch fsoma
	return x+y;
}
int subtrai (int x, int y) {
	//Alteração feita na branch fsubtrai
	return x-y;
}
int multiplica (int x, int y) {
	//Alteração feita na branch fmult
	return x*y;
}
int divide (int x, int y) {
	//Alteração feita na branch fdiv
	return x/y;
}


int main() {
	printf("Hello git! \n\n");
	printf("Soma: %d\n", soma(2,2));
	printf("Subtração: %d\n", subtrai(2,2));
	printf("Multiplicação: %d\n", multiplica(2,2));
	printf("Divisão: %d\n", divide(2,2));
} 
