#include<stdio.h>
#include<locale.h>

float media (float n1, float n2, float n3);
void conceito (float m);

int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, b, c;
	
	printf("Informe a primeira nota: ");
	scanf("%f", &a);
	printf("Informe a segunda nota: ");
	scanf("%f", &b);
	printf("Informe a terceira nota: ");
	scanf("%f", &c);
	
	conceito(media(a, b, c));
return(0);
}

float media(float n1, float n2, float n3){
	return((n1 + n2+ n3) / 3);
}

void conceito(float m){
	if(m >= 9){
		printf("Sua m�dia � %.1f. Voc� est� no conceito A", m);
	}
	else if((m >= 7) && (m < 9)){
		printf("Sua m�dia � %.1f. Voc� est� no conceito B", m);
	}
	else if((m >= 6) && (m < 7)){
		printf("Sua m�dia � %.1f. Voc� est� no conceito C", m);
	}
	else if((m >= 4) && (m < 6)){
		printf("Sua m�dia � %.1f. Voc� est� no conceito D", m);
	}
	else{
		printf("Sua m�dia � %.1f. Voc� est� no conceito E", m);
	}
}
