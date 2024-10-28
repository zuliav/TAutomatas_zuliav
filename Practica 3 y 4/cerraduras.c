#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int nCadenas, opciones, numCaracteres;
	int i,j;
	printf("Inserte numero de cadenas:");
	scanf("%i",&nCadenas);
	srand(time(NULL));
	nCadenas=(nCadenas*2)-1;
	numCaracteres=rand()%4+1;
	printf("\nALFABETO: {1, 2, 3}\nCerradura de Kleene \n(vacio)[ ], ");
	for(i=0;i<nCadenas;i++){//for universal
		if(i==(nCadenas/2)){
		printf("\n\nCerradura Positiva\n");	
		numCaracteres=numCaracteres-1;
		}
		printf("(%i)", numCaracteres);
		for(j=0;j<numCaracteres;j++){//num caracteres
			opciones=rand()%3+1;
			switch(opciones){
				case 1:
					printf("1");
					break;
				case 2:
					printf("2");
					break;
				case 3:
					printf("3");
					break;
			}
		}
		printf(", ");
		numCaracteres++;
	}
	numCaracteres=rand()%3+1;
	printf("\n\n\nALFABETO: {a, b}\nCerradura de Kleene \n(vacio)[ ], ");
	for(i=0;i<nCadenas;i++){//for universal
		if(i==(nCadenas/2)){
		printf("\n\nCerradura Positiva\n");	
		numCaracteres=numCaracteres-1;
		}
		printf("(%i)", numCaracteres);
		for(j=0;j<numCaracteres;j++){//num caracteres
			opciones=rand()%2+1;
			switch(opciones){
				case 1:
					printf("a");
					break;
				case 2:
					printf("b");
					break;
			}
		}
		printf(", ");
		numCaracteres++;
	}
	numCaracteres=rand()%2+1;
	printf("\n\n\nALFABETO: {a1, b2}\nCerradura de Kleene \n(vacio)[ ], ");
	for(i=0;i<nCadenas;i++){//for universal
		if(i==(nCadenas/2)){
		printf("\n\nCerradura Positiva\n");	
		numCaracteres=numCaracteres-1;
		}
		printf("(%i)", numCaracteres);
		for(j=0;j<numCaracteres;j++){//num caracteres
			opciones=rand()%2+1;
			switch(opciones){
				case 1:
					printf("a1");
					break;
				case 2:
					printf("b2");
					break;
			}
		}
		printf(", ");
		numCaracteres++;
	}	
	return 0;
}

