#include<stdio.h>
void swap(int* c, int* d) { //swap 함수
	int temp1; //임의의 변수 temp1 
	temp1 = *c; 
	*c = *d;
	*d = temp1;
}

int main() {

	int a = 1; //a,b는 변수를 이용하는 경우
	int b = 2;

	int c = 3; //c,d는 포인터를 이용하는 경우
	int d = 4;

	printf("a: %d, b; %d\n", a, b); // 변수를 이용해 swap 함수를 만들었다
	int temp = a;
	printf("a: %d, b; %d, temp: %d\n", a, b, temp); // 

	a = b;
	printf("a: %d, b; %d, temp: %d\n", a, b, temp);

	b = temp;
	printf("a: %d, b; %d, temp: %d\n", a, b, temp);

 	printf("a: %d, b; %d\n\n\n", a, b); // 



	printf("c: %d, d: %d\n", c, d); // 포인터를 사용해서 swap 함수를 만들었다
	swap(&c, &d); //swap 함수사용
	printf("c: %d, d: %d\n", c, d); //swap함수 사용후 c,d의 변화
	return 0;
}