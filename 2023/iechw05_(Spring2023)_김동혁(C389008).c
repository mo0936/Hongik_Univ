#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
float income, budgetLiving, actualLiving, actualTaxes, actualTithe, other, budgetTaxes, budgetTithe; //변수 선언하기

float CalculateTax() { //세금 비율 계산을 CalculateTax 함수로 지정

    if (income * 12 > 0 && income * 12 <= 15100) { //연봉 = income * 12, 연봉 범위에 따라 budgetTaxes 값 계산 
        budgetTaxes = income * 0.1; //budgetTaxes는 수익의 10%이므로 * 0.1
    }
    if (income * 12 > 15100 && income * 12 <= 61300) { //연봉의 범위 계산
        budgetTaxes = income * 0.15; //budgetTaxes는 수익의 10%이므로 * 0.15
    }
    if (income * 12 > 61300 && income * 12 <= 123700) { //연봉의 범위 계산
        budgetTaxes = income * 0.25; //budgetTaxes는 수익의 10%이므로 * 0.25
    }
    if (income * 12 > 123700 && income * 12 <= 188450) { //연봉의 범위 계산
        budgetTaxes = income * 0.28; //budgetTaxes는 수익의 10%이므로 * 0.28 
    }
    if (income * 12 > 188450 && income * 12 <= 336550) { //연봉의 범위 계산
        budgetTaxes = income * 0.33; //budgetTaxes는 수익의 10%이므로 * 0.33     
    }
    if (income * 12 > 336550) { //연봉의 범위 계산
        budgetTaxes = income * 0.35; //budgetTaxes는 수익의 10%이므로 * 0.35
    }
    budgetTithe = income * 0.1; //십일조는 수익의 10%이므로 * 0.1

    return budgetTaxes; //budgetTaxes값 반환
}

float main() { //메인함수
    
    printf("This program keeps track of your monthly budget\n"); //This program keeps track of your monthly budget 출력
    printf("Please enter the follwing:\n"); //Please enter the follwing: 출력
    printf("\tYour monthly income: "); //Your monthly income: 출력    
    scanf("%f", &income); //입력받은 수를 변수 income에 저장
    printf("\tYour budgeted living expenses: "); //Your budgeted living expenses: 출력
    scanf("%f", &budgetLiving); //입력받은 수를 변수 budgetLiving에 저장
    printf("\tYour actual living expenses: "); //Your actual living expenses: 출력
    scanf("%f", &actualLiving); //입력받은 수를 변수 actualLiving에 저장
    printf("\tYour actual taxes withheld: ");// Your actual taxes withheld: 출력
    scanf("%f", &actualTaxes); //입력받은 수를 변수 actualTaxes에 저장
    printf("\tYour actual tithe offerings: "); //Your actual tithe offerings: 출력
    scanf("%f", &actualTithe); //입력받은 수를 변수 actualTithe에 저장
    printf("\tYour actual other expenses: "); //Your actual other expenses: 출력
    scanf("%f", &other); //입력받은 수를 변수 other에 저장
    printf("\n");//줄바꿈
    float budgetTaxes = CalculateTax(); //CalculateTax 함수에서 반환받은 budgetTaxes 선언
    float result1 = income - budgetTaxes - budgetTithe - budgetLiving - other; //result1 선언
    float result2 = income - actualTaxes - actualTithe - actualLiving - other; //result2 선언
    printf("The followong is a report on your monthly expenses\n");//The followong is a report on your monthly expenses 출력
    printf("\tItem                  Budget          Actual\n"); //Item                  Budget          Actual 출력
    printf("\t=============== =============== ===============\n"); //=============== =============== =============== 출력
    printf("\tIncome          $    %.2f    $    %.2f\n", income , income); //출력 후 %,2f에 소수둘째자리까지 변수 income 할당
    printf("\tTaxes           $     %.2f    $     %.2f\n", budgetTaxes, actualTaxes); //출력 후 %.2f에 소수둘쨰자리까지 변수 budgetTaxes, actualTaxes 할당
    printf("\tTithing         $     %.2f    $     %.2f\n", budgetTithe, actualTithe); //출력 후 %.2f에 소수둘쨰자리까지 변수 budgetTithe, actualTithe 할당
    printf("\tLiving          $     %.2f    $     %.2f\n", budgetLiving, actualLiving); //출력 후 %.2f에 소수둘쨰자리까지 변수 budgetLiving, actualLiving 할당
    printf("\tOther           $     %.2f    $     %.2f\n", other, other); //출력 후 %.2f에 소수둘쨰자리까지 변수 other 할당
    printf("\t=============== =============== ===============\n"); //=============== =============== =============== 출력
    printf("\tDiffrence       $       %.2f    $     %.2f\n",result1, result2); //출력 후 %.2f에 소수둘쨰자리까지 변수 result1,result2 할당

    return 0;
}