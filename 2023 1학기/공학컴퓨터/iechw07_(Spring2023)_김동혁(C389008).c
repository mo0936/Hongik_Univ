#include<stdio.h>
void swap(int *a, int *b) { //swap �Լ�
    int temp; //a�� b�� ��ġ�� �ٲٱ� ���� temp���

    temp = *a; // *a  *b  temp:*a
    *a = *b;   // *b  *b  temp:*a
    *b = temp; // *b  *a  temp:*a
}

int main() { //���� �Լ�
    int num[8] = { 4, 7, 3, 8, 2, 10, 25, 1 }; //���� �迭
    
    int i; //i ����
    int j; //j ����

    for (i = 0; i < 8; i++) { //�迭 ���� ����ŭ �ݺ�
        for (j = 0 ; j < 7-i ; j++){ //�� �ڴ� ����ū���� ���Ƿ� �� �� ���� �ݺ�
            if (num[j] > num[j + 1]) { //���� ���� ������ ������ Ŭ ��
                swap(&num[j], &num[j + 1]); //swap �Լ� ���
            }
        }

    }
    
 
    for (i = 0; i < 8; i++) { //num �� ����ϴ� �ڵ�
        printf("%d ", num[i]);     

    return 0;
}
