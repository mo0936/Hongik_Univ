#include<stdio.h>
void swap(int* c, int* d) { //swap �Լ�
	int temp1; //������ ���� temp1 
	temp1 = *c; 
	*c = *d;
	*d = temp1;
}

int main() {

	int a = 1; //a,b�� ������ �̿��ϴ� ���
	int b = 2;

	int c = 3; //c,d�� �����͸� �̿��ϴ� ���
	int d = 4;

	printf("a: %d, b; %d\n", a, b); // ������ �̿��� swap �Լ��� �������
	int temp = a;
	printf("a: %d, b; %d, temp: %d\n", a, b, temp); // 

	a = b;
	printf("a: %d, b; %d, temp: %d\n", a, b, temp);

	b = temp;
	printf("a: %d, b; %d, temp: %d\n", a, b, temp);

 	printf("a: %d, b; %d\n\n\n", a, b); // 



	printf("c: %d, d: %d\n", c, d); // �����͸� ����ؼ� swap �Լ��� �������
	swap(&c, &d); //swap �Լ����
	printf("c: %d, d: %d\n", c, d); //swap�Լ� ����� c,d�� ��ȭ
	return 0;
}