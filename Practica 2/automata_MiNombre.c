#include <stdio.h>

void z();
void u();
void l();
void i1();
void a();
void n();
void i2();

int main(){
	z();
	return 0;
}

void z(){
	printf("z");
	u();
}

void u(){
	printf("u");
	l();
}

void l(){
	printf("l");
	i1();
}


void i1(){
	printf("i");
	a();
}

void a(){
	printf("a");
	n();
}
void n(){
	printf("n");
	i2();
}

void i2(){
	printf("i");
}
