#include<stdio.h>
#include<locale.h>

float area(float r); //Prot�tipo da fun��o

int main(){
	setlocale(LC_ALL, "Portuguese");
	float r;
	
	printf("Informe o raio: ");
	scanf("%f", &r);
	
	printf("O tamanho da area � %.1f", area(r)); //Chamada da fun��o
	
return(0);
}

float area(float r){ //Fun��o para saber a area
	return(3.14 * (r * r));
}
