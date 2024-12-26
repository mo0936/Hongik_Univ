#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
char* Quantization(float num);
int main() {
	float n1, n2, n3, n4, n5;
	char *a, *b, *c, *d, *e;

	printf("Type the values of 5 sampled points: ");
	scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);

	a = Quantization(n1);
	b = Quantization(n2);
	c = Quantization(n3);
	d = Quantization(n4);
	e = Quantization(n5);

	printf("Digitized signal after quantization and coding is %s %s %s %s %s\n", a, b, c, d, e);

	return 0;
}
char* Quantization(float num) {

	char* res = (char*)malloc(sizeof(char) *4);
	if (num >= -5 && num < -3.75) {
		res[0] = '0';
		res[1] = '1';
		res[2] = '1';
	}
	else if (num >= -3.75 && num < -2.5) {
		res[0] = '0';
		res[1] = '1';
		res[2] = '0';
	}
	else if (num >= -2.5 && num < -1.25) {
		res[0] = '0';
		res[1] = '0';
		res[2] = '1';
	}
	else if (num >= -1.25 && num < 0) {
		res[0] = '0';
		res[1] = '0';
		res[2] = '0';
	}
	else if (num >= 0 && num < 1.25) {
		res[0] = '1';
		res[1] = '0';
		res[2] = '0';
	}
	else if (num >= 1.25 && num < 2.5) {
		res[0] = '1';
		res[1] = '0';
		res[2] = '1';
	}
	else if (num >= 2.5 && num < 3.75) {
		res[0] = '1';
		res[1] = '1';
		res[2] = '0';
	}
	else if (num >= 3.75 && num < 5) {
		res[0] = '1';
		res[1] = '1';
		res[2] = '1';
	}
	res[3] = NULL;
	
	return res;
}	
