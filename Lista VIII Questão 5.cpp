#include<stdio.h>
#include<locale.h>

void multiplicou(int m); //Port�tipo da fun��o

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%i", &n);
	
	multiplicou(n); //Chamada da fun��o, passando n como argumento
	
	return(0);
}

void multiplicou(int m){ //Fun��o para verificar se o n�mero � m�ltiplo de 5
	if(m % 5 == 0){
		printf("%i � m�ltiplo de 5!", m);
	}
	else{
		printf("%i n�o � m�ltiplo de 5!", m);
	}
}
