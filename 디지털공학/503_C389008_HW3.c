#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int LEVEL(float Qlevel, float num);
char* Quantization(int Qlevel, int level);
int main() {
	int Qlevel, a_lv, b_lv, c_lv, d_lv, e_lv;
	float n1, n2, n3, n4, n5;
	char* a, * b, * c, * d, * e;

	printf("What is the level of Quantization? ");
	scanf("%d", &Qlevel);
	printf("Type the values of 5 sampled points: ");
	scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);

	a_lv = LEVEL(Qlevel, n1);
	b_lv = LEVEL(Qlevel, n2);
	c_lv = LEVEL(Qlevel, n3);
	d_lv = LEVEL(Qlevel, n4);
	e_lv = LEVEL(Qlevel, n5);

	printf("The level of the input samples are %d, %d, %d, %d, %d\n", a_lv, b_lv, c_lv, d_lv, e_lv);

	a = Quantization(Qlevel, a_lv);
	b = Quantization(Qlevel, b_lv);
	c = Quantization(Qlevel, c_lv);
	d = Quantization(Qlevel, d_lv);
	e = Quantization(Qlevel, e_lv);
	printf("Digitized signal after quantization and coding is %s %s %s %s %s\n", a, b, c, d, e);

	return 0;
}

int LEVEL(float Qlevel, float num) {

	float LV = 10.0 / Qlevel;
	int SampleLevel;

	for (int i = 0; i < Qlevel; i++) {
		if (num >= -5 + (LV * i) && num < -5 + (LV * (i + 1))) {
			SampleLevel = i;
			break;
		}
	}
	return SampleLevel;
}

char* Quantization(int Qlevel, int level) {

	int bit = log2(Qlevel);
	int res;
	char* num = (char*)malloc(bit + 1);


	for (int i = bit - 1; i >= 0; i--) {
		num[bit - 1 - i] = level >> i & 1 ? '1' : '0';
	}
	num[bit] = '\0';

	return num;
}