#define _CRT_SECURE_NO_WARNINGS //scanf ���� ��� ����
#include<stdio.h> //������� ����
int main() { //���α׷� �������̰� ����� �����̴�
	int number; //���������� number

	printf("�������� ����մϴ�. ���ڸ� �Է��ϼ���: "); //"�������� ����մϴ�. ���ڸ� �Է��ϼ���: "������ ����ϴ� �ڵ�
	scanf("%d", &number); //�Է��� ������ number������ �����Ѵ�

	printf("%d x 1 = %d\n", number, (number * 1)); //������ 1�� ���ϴ� ���� ����Ѵ�
	printf("%d x 2 = %d\n", number, (number * 2)); //������ 2�� ���ϴ� ���� ����Ѵ�
	printf("%d x 3 = %d\n", number, (number * 3)); //������ 3�� ���ϴ� ���� ����Ѵ�
	printf("%d x 4 = %d\n", number, (number * 4)); //������ 4�� ���ϴ� ���� ����Ѵ�
	printf("%d x 5 = %d\n", number, (number * 5)); //������ 5�� ���ϴ� ���� ����Ѵ�
	printf("%d x 6 = %d\n", number, (number * 6)); //������ 6�� ���ϴ� ���� ����Ѵ�
	printf("%d x 7 = %d\n", number, (number * 7)); //������ 7�� ���ϴ� ���� ����Ѵ�
	printf("%d x 8 = %d\n", number, (number * 8)); //������ 8�� ���ϴ� ���� ����Ѵ�
	printf("%d x 9 = %d\n", number, (number * 9)); //������ 9�� ���ϴ� ���� ����Ѵ�
	
	return 0; //0���� ��ȯ�Ѵ�
}