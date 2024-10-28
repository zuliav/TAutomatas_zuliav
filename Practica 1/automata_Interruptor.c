#include <stdio.h>
//zuliani avendaño vera
int on(int interruptor);
int off(int interruptor);

int main(){
	int interruptor;
	printf("apagado\n");
	scanf("\n%i", &interruptor);
	while(interruptor==0){
		on(interruptor);
		printf("encendido\n");
		scanf("\n%i", &interruptor);
		if(interruptor==0){
			off(interruptor);
			printf("apagado\n");
		}
		scanf("%i", &interruptor);
	}
	return 0;
}

int on(int interruptor){
	return 0;
}

int off(int interruptor){
	return 0;	
}

