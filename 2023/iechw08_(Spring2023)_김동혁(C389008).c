#include<stdio.h>
void swap(int* a, int* b) { //swap �Լ�
	int temp; //a�� b�� ��ġ�� �ٲٱ� ���� temp���

	temp = *a; // *a  *b  temp:*a
	*a = *b;   // *b  *b  temp:*a
	*b = temp; // *b  *a  temp:*a
}

int main() {// �����Լ�

	int num[8] = { 4, 7, 3, 8, 2, 10, 25, 1 }; // ũ���� 8�� �迭 num

	int i; // i ����
	int j; // j ����
	

	for (i = 0; i < 8; i++) { //�ݺ��� i�� 0���� 7���� 8�� �ݺ�
		for (j = i+1 ; j < 8; j++) { //j�� i+1���� 7���� �ݺ�
			
			if (num[i] > num[j]) { // num[j]�� num[i]�� ���� �ε��� �̰� ���� �ε����� �� ũ�ٸ� 
				swap(&num[i], &num[j]); //swap �Լ� ���
			}
		}
	}
	
	for (i = 0; i < 8; i++) { //num �� ����ϴ� �ڵ�
		printf("%d ", num[i]); //�ε��� 0~7 ���
	}

	return 0;
}