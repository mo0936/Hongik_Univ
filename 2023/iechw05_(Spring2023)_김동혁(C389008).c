#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
float income, budgetLiving, actualLiving, actualTaxes, actualTithe, other, budgetTaxes, budgetTithe; //���� �����ϱ�

float CalculateTax() { //���� ���� ����� CalculateTax �Լ��� ����

    if (income * 12 > 0 && income * 12 <= 15100) { //���� = income * 12, ���� ������ ���� budgetTaxes �� ��� 
        budgetTaxes = income * 0.1; //budgetTaxes�� ������ 10%�̹Ƿ� * 0.1
    }
    if (income * 12 > 15100 && income * 12 <= 61300) { //������ ���� ���
        budgetTaxes = income * 0.15; //budgetTaxes�� ������ 10%�̹Ƿ� * 0.15
    }
    if (income * 12 > 61300 && income * 12 <= 123700) { //������ ���� ���
        budgetTaxes = income * 0.25; //budgetTaxes�� ������ 10%�̹Ƿ� * 0.25
    }
    if (income * 12 > 123700 && income * 12 <= 188450) { //������ ���� ���
        budgetTaxes = income * 0.28; //budgetTaxes�� ������ 10%�̹Ƿ� * 0.28 
    }
    if (income * 12 > 188450 && income * 12 <= 336550) { //������ ���� ���
        budgetTaxes = income * 0.33; //budgetTaxes�� ������ 10%�̹Ƿ� * 0.33     
    }
    if (income * 12 > 336550) { //������ ���� ���
        budgetTaxes = income * 0.35; //budgetTaxes�� ������ 10%�̹Ƿ� * 0.35
    }
    budgetTithe = income * 0.1; //�������� ������ 10%�̹Ƿ� * 0.1

    return budgetTaxes; //budgetTaxes�� ��ȯ
}

float main() { //�����Լ�
    
    printf("This program keeps track of your monthly budget\n"); //This program keeps track of your monthly budget ���
    printf("Please enter the follwing:\n"); //Please enter the follwing: ���
    printf("\tYour monthly income: "); //Your monthly income: ���    
    scanf("%f", &income); //�Է¹��� ���� ���� income�� ����
    printf("\tYour budgeted living expenses: "); //Your budgeted living expenses: ���
    scanf("%f", &budgetLiving); //�Է¹��� ���� ���� budgetLiving�� ����
    printf("\tYour actual living expenses: "); //Your actual living expenses: ���
    scanf("%f", &actualLiving); //�Է¹��� ���� ���� actualLiving�� ����
    printf("\tYour actual taxes withheld: ");// Your actual taxes withheld: ���
    scanf("%f", &actualTaxes); //�Է¹��� ���� ���� actualTaxes�� ����
    printf("\tYour actual tithe offerings: "); //Your actual tithe offerings: ���
    scanf("%f", &actualTithe); //�Է¹��� ���� ���� actualTithe�� ����
    printf("\tYour actual other expenses: "); //Your actual other expenses: ���
    scanf("%f", &other); //�Է¹��� ���� ���� other�� ����
    printf("\n");//�ٹٲ�
    float budgetTaxes = CalculateTax(); //CalculateTax �Լ����� ��ȯ���� budgetTaxes ����
    float result1 = income - budgetTaxes - budgetTithe - budgetLiving - other; //result1 ����
    float result2 = income - actualTaxes - actualTithe - actualLiving - other; //result2 ����
    printf("The followong is a report on your monthly expenses\n");//The followong is a report on your monthly expenses ���
    printf("\tItem                  Budget          Actual\n"); //Item                  Budget          Actual ���
    printf("\t=============== =============== ===============\n"); //=============== =============== =============== ���
    printf("\tIncome          $    %.2f    $    %.2f\n", income , income); //��� �� %,2f�� �Ҽ���°�ڸ����� ���� income �Ҵ�
    printf("\tTaxes           $     %.2f    $     %.2f\n", budgetTaxes, actualTaxes); //��� �� %.2f�� �Ҽ��Ѥ��ڸ����� ���� budgetTaxes, actualTaxes �Ҵ�
    printf("\tTithing         $     %.2f    $     %.2f\n", budgetTithe, actualTithe); //��� �� %.2f�� �Ҽ��Ѥ��ڸ����� ���� budgetTithe, actualTithe �Ҵ�
    printf("\tLiving          $     %.2f    $     %.2f\n", budgetLiving, actualLiving); //��� �� %.2f�� �Ҽ��Ѥ��ڸ����� ���� budgetLiving, actualLiving �Ҵ�
    printf("\tOther           $     %.2f    $     %.2f\n", other, other); //��� �� %.2f�� �Ҽ��Ѥ��ڸ����� ���� other �Ҵ�
    printf("\t=============== =============== ===============\n"); //=============== =============== =============== ���
    printf("\tDiffrence       $       %.2f    $     %.2f\n",result1, result2); //��� �� %.2f�� �Ҽ��Ѥ��ڸ����� ���� result1,result2 �Ҵ�

    return 0;
}