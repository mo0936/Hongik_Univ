#define _CRT_SECURE_NO_WARNINGS //scanf 보안 경고 무시
#include<stdio.h> //헤더파일 포함
int main() { //프로그램 시작점이고 결과가 정수이다
	int number; //정수형변수 number

	printf("구구단을 출력합니다. 숫자를 입력하세요: "); //"구구단을 출력합니다. 숫자를 입력하세요: "문장을 출력하는 코드
	scanf("%d", &number); //입력한 정수를 number변수에 저장한다

	printf("%d x 1 = %d\n", number, (number * 1)); //변수와 1을 곱하는 식을 출력한다
	printf("%d x 2 = %d\n", number, (number * 2)); //변수와 2을 곱하는 식을 출력한다
	printf("%d x 3 = %d\n", number, (number * 3)); //변수와 3을 곱하는 식을 출력한다
	printf("%d x 4 = %d\n", number, (number * 4)); //변수와 4을 곱하는 식을 출력한다
	printf("%d x 5 = %d\n", number, (number * 5)); //변수와 5을 곱하는 식을 출력한다
	printf("%d x 6 = %d\n", number, (number * 6)); //변수와 6을 곱하는 식을 출력한다
	printf("%d x 7 = %d\n", number, (number * 7)); //변수와 7을 곱하는 식을 출력한다
	printf("%d x 8 = %d\n", number, (number * 8)); //변수와 8을 곱하는 식을 출력한다
	printf("%d x 9 = %d\n", number, (number * 9)); //변수와 9을 곱하는 식을 출력한다
	
	return 0; //0값을 반환한다
}