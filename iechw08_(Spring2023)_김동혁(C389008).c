#include<stdio.h>
void swap(int* a, int* b) { //swap 함수
	int temp; //a와 b의 위치를 바꾸기 위해 temp사용

	temp = *a; // *a  *b  temp:*a
	*a = *b;   // *b  *b  temp:*a
	*b = temp; // *b  *a  temp:*a
}

int main() {// 메인함수

	int num[8] = { 4, 7, 3, 8, 2, 10, 25, 1 }; // 크리가 8인 배열 num

	int i; // i 선언
	int j; // j 선언
	

	for (i = 0; i < 8; i++) { //반복문 i는 0부터 7까지 8번 반복
		for (j = i+1 ; j < 8; j++) { //j는 i+1부터 7까지 반복
			
			if (num[i] > num[j]) { // num[j]는 num[i]의 다음 인덱스 이고 전의 인덱스가 더 크다면 
				swap(&num[i], &num[j]); //swap 함수 사용
			}
		}
	}
	
	for (i = 0; i < 8; i++) { //num 을 출력하는 코드
		printf("%d ", num[i]); //인덱스 0~7 출력
	}

	return 0;
}