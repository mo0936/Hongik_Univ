#include<stdio.h>
int main() {
	int a, b, c, d, e, f, g, h, i, j;

	printf("수학점수를 입력하세요: ");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	scanf("%d",&f);
	scanf("%d",&g);
	scanf("%d",&h);
	scanf("%d",&i);
	scanf("%d",&j);
	printf("평균: %d\n",(a+b+c+d+e+f+g+h+i+j)/10);

	return 0;
}