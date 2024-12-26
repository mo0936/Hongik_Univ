#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct Member { //����ü Member
	char name[10]; //ũ�Ⱑ 10�� �迭
	int Birthday; 
	char School[20]; // ũ�Ⱑ 20�� �迭
	char Student_ID[10]; // ũ�Ⱑ 10�� �迭 
	int Enter_Year_Month;
	char Email[50];  // ũ�Ⱑ 50�� �迭 
	char Hobby[10][10];  // 2�� �迭 
	char Specialty[10][10];//2�߹迭
	char Self_Introduction[30];  // ũ�Ⱑ 30�� �迭 
};
struct Member information; // information�� ���������� ����

int Registration() {
	int member_num;

	printf("\n\n����� ���� ȸ�� ������ �Է��� �ּ���."); 
	printf("\n�̸��� �Է��ϼ���: ");
	scanf("%s", information.name); //�̸� �Է�

	printf("��������� �Է��ϼ���: ");
	scanf("%d", &information.Birthday); //������� �Է�

	printf("�б��� �Է��ϼ���: ");
	scanf("%s", information.School); //�б��Է�

	printf("�й��� �Է��ϼ���: ");
	scanf("%s", information.Student_ID); //�к� �Է�

	printf("���г���� �Է��ϼ���: ");
	scanf("%d", &information.Enter_Year_Month); //���г�� �Է�

	printf("�̸����� �Է��ϼ���: ");
	scanf("%s", information.Email); //�̸��� �Է�

	printf("��̸� �Է��ϼ��� (3�� �̻� ,10�� ����):\n");
	for (int i = 0; i < 10; i++) {
		if (i >= 3) {
			printf("�׸� �Է��Ͻ÷��� 0�� �����ּ���: "); //3���̻� ���ʹ� 10�� ���� �Է� ������ ���� ����. 0�������� �������� �Ѿ.
			int continueInput;
			scanf("%d", &continueInput); //����Է�
			if (continueInput == 0) {
				break;  // �Է� �ߴ�
			}
		}
		printf("%d ", i + 1);
		scanf("%s", information.Hobby[i]);
	}

	printf("Ư�⸦ �Է��ϼ��� (3�� �̻� 10�� ����):\n");
	for (int i = 0; i < 10; i++) {
		if (i >= 3) {
			printf("�׸� �Է��Ͻ÷��� 0�� �����ּ���: "); //3���̻� ���ʹ� 10�� ���� �Է� ������ ���� ����. 0�������� �������� �Ѿ.
			int continueInput;
			scanf("%d", &continueInput); //Ư�� �Է�
			if (continueInput == 0) {
				break;  // �Է� �ߴ�
			}
		}
		printf("%d ", i + 1);
		scanf("%s", information.Specialty[i]); //Ư���Է�
	}

	printf("���ٷ� �ڱ�Ұ��� �Է��ϼ���: ");
	scanf("%s", information.Self_Introduction);

	return 0;
}


int Print_information() { //ȸ�� ���� ���

	printf("\n\nȸ�� ����\n"); 
	printf("�̸�: %s\n", information.name); //�̸� ���
	printf("�������: %d\n", information.Birthday); //������� ���
	printf("�б�: %s\n", information.School); //�б� ���
	printf("�й�: %s\n", information.Student_ID); //�й����
	printf("���г��: %d\n", information.Enter_Year_Month); //���г�� ���
	printf("�̸���: %s\n", information.Email); // �Ƹ��� ���
	printf("���:\n"); //��� ���
	for (int i = 0; i < 10; i++) {
		if (information.Hobby[i][0] == '\0') // �� ���ڿ��̸� ��� �ߴ�
			break;
		printf("- %s\n", information.Hobby[i]); //��� �ִ� 10���� ���
	}
	printf("Ư��:\n");
	for (int i = 0; i < 10; i++) {
		if (information.Specialty[i][0] == '\0') // �� ���ڿ��̸� ��� �ߴ�
			break;
		printf("- %s\n", information.Specialty[i]); // Ư�� �ִ� 10���� ���
	}
	printf("�ڱ�Ұ�: %s\n", information.Self_Introduction); // �ڱ�Ұ� ���

	return 0;
}


int Delete_information() {

}

int Change_information() {

}

int main() {
	int choice;

	while (1) { //���� �ݺ�
		printf("\n\n�޴����� ���ϴ� �ɼ��� �����ϼ���.");
		printf("\n1. ȸ�����");
		printf("\n2. ȸ�� ���� ����");
		printf("\n3. ȸ�� ���� ����");
		printf("\n4. ȸ�� ���� ����");
		printf("\n5. ���α׷� ����");
		printf("\n���ϴ� ��ȣ�� �Է��ϼ���: ");
		scanf("%d", &choice); // ���ϴ� �ൿ 1~5�߿��� �Է�

		if (choice == 1) {
			Registration(); // 1�� ������ ȸ����� �ϱ�
		}
		else if (choice == 2) {
			Print_information(); // 2�� ������ ȸ�� ���� ���
		}
		else if (choice == 3) {
			Delete_information(); // 3�� ������ ȸ������ ����
		}
		else if (choice == 4) {
			Change_information(); // 4�� ������ ȸ�� ���� ����
		}
		else if (choice == 5) {
			printf("\n���α׷��� �����մϴ�."); // 5�� ������ ���α׷� ����
			break;
		}
		else {
			printf("\n1 ~ 5 �߿��� �Է����ּ���."); // �׿ܴ� �ٽ� �Է�
		}
	}

	return 0;
}
