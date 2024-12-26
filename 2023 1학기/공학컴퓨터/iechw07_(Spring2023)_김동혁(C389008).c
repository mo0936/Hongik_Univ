#include<stdio.h>
void swap(int *a, int *b) { //swap 함수
    int temp; //a와 b의 위치를 바꾸기 위해 temp사용

    temp = *a; // *a  *b  temp:*a
    *a = *b;   // *b  *b  temp:*a
    *b = temp; // *b  *a  temp:*a
}

int main() { //메인 함수
    int num[8] = { 4, 7, 3, 8, 2, 10, 25, 1 }; //숫자 배열
    
    int i; //i 선언
    int j; //j 선언

    for (i = 0; i < 8; i++) { //배열 안의 수만큼 반복
        for (j = 0 ; j < 7-i ; j++){ //맨 뒤는 가장큰수가 오므로 그 앞 까지 반복
            if (num[j] > num[j + 1]) { //왼쪽 값이 오른쪽 값보다 클 때
                swap(&num[j], &num[j + 1]); //swap 함수 사용
            }
        }

    }
    
 
    for (i = 0; i < 8; i++) { //num 을 출력하는 코드
        printf("%d ", num[i]);     

    return 0;
}
