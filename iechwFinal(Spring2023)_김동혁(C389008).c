#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct Member { //구조체 Member
	char name[10]; //크기가 10인 배열
	int Birthday; 
	char School[20]; // 크기가 20인 배열
	char Student_ID[10]; // 크기가 10인 배열 
	int Enter_Year_Month;
	char Email[50];  // 크기가 50인 배열 
	char Hobby[10][10];  // 2중 배열 
	char Specialty[10][10];//2중배열
	char Self_Introduction[30];  // 크기가 30인 배열 
};
struct Member information; // information을 전역변수로 선언

int Registration() {
	int member_num;

	printf("\n\n등록을 위해 회원 정보를 입력해 주세요."); 
	printf("\n이름을 입력하세요: ");
	scanf("%s", information.name); //이름 입력

	printf("생년월일을 입력하세요: ");
	scanf("%d", &information.Birthday); //생년월일 입력

	printf("학교를 입력하세요: ");
	scanf("%s", information.School); //학교입력

	printf("학번을 입력하세요: ");
	scanf("%s", information.Student_ID); //학변 입력

	printf("입학년월을 입력하세요: ");
	scanf("%d", &information.Enter_Year_Month); //입학년월 입력

	printf("이메일을 입력하세요: ");
	scanf("%s", information.Email); //이메일 입력

	printf("취미를 입력하세요 (3개 이상 ,10개 이하):\n");
	for (int i = 0; i < 10; i++) {
		if (i >= 3) {
			printf("그만 입력하시려면 0을 눌러주세요: "); //3개이상 부터는 10개 까지 입력 받을지 말지 선택. 0을누르면 다음으로 넘어감.
			int continueInput;
			scanf("%d", &continueInput); //취미입력
			if (continueInput == 0) {
				break;  // 입력 중단
			}
		}
		printf("%d ", i + 1);
		scanf("%s", information.Hobby[i]);
	}

	printf("특기를 입력하세요 (3개 이상 10개 이하):\n");
	for (int i = 0; i < 10; i++) {
		if (i >= 3) {
			printf("그만 입력하시려면 0을 눌러주세요: "); //3개이상 부터는 10개 까지 입력 받을지 말지 선택. 0을누르면 다음으로 넘어감.
			int continueInput;
			scanf("%d", &continueInput); //특기 입력
			if (continueInput == 0) {
				break;  // 입력 중단
			}
		}
		printf("%d ", i + 1);
		scanf("%s", information.Specialty[i]); //특기입력
	}

	printf("한줄로 자기소개를 입력하세요: ");
	scanf("%s", information.Self_Introduction);

	return 0;
}


int Print_information() { //회원 정보 출력

	printf("\n\n회원 정보\n"); 
	printf("이름: %s\n", information.name); //이름 출력
	printf("생년월일: %d\n", information.Birthday); //생년월일 출력
	printf("학교: %s\n", information.School); //학교 출력
	printf("학번: %s\n", information.Student_ID); //학번출력
	printf("입학년월: %d\n", information.Enter_Year_Month); //입학년월 출력
	printf("이메일: %s\n", information.Email); // 아메일 출력
	printf("취미:\n"); //취미 출력
	for (int i = 0; i < 10; i++) {
		if (information.Hobby[i][0] == '\0') // 빈 문자열이면 출력 중단
			break;
		printf("- %s\n", information.Hobby[i]); //취미 최대 10가지 출력
	}
	printf("특기:\n");
	for (int i = 0; i < 10; i++) {
		if (information.Specialty[i][0] == '\0') // 빈 문자열이면 출력 중단
			break;
		printf("- %s\n", information.Specialty[i]); // 특기 최대 10가지 출력
	}
	printf("자기소개: %s\n", information.Self_Introduction); // 자기소개 출력

	return 0;
}


int Delete_information() {

}

int Change_information() {

}

int main() {
	int choice;

	while (1) { //무한 반복
		printf("\n\n메뉴에서 원하는 옵션을 선택하세요.");
		printf("\n1. 회원등록");
		printf("\n2. 회원 정보 열람");
		printf("\n3. 회원 정보 삭제");
		printf("\n4. 회원 정보 수정");
		printf("\n5. 프로그램 종료");
		printf("\n원하는 번호를 입력하세요: ");
		scanf("%d", &choice); // 원하는 행동 1~5중에서 입력

		if (choice == 1) {
			Registration(); // 1을 누르면 회원등록 하기
		}
		else if (choice == 2) {
			Print_information(); // 2를 누르면 회원 정보 출력
		}
		else if (choice == 3) {
			Delete_information(); // 3을 누르면 회원정보 삭제
		}
		else if (choice == 4) {
			Change_information(); // 4를 누르면 회원 정보 수정
		}
		else if (choice == 5) {
			printf("\n프로그램을 종료합니다."); // 5를 누르면 프로그램 종료
			break;
		}
		else {
			printf("\n1 ~ 5 중에서 입력해주세요."); // 그외는 다시 입력
		}
	}

	return 0;
}
