#include<stdio.h>
int main() {
    float income, expenses, living, taxes, tithe, other;
    printf("This program keeps track of your monthly budget\n");
    printf("Please enter the follwing:\n");
    printf("        Your monthly income: ");
    scanf("%f", &income);
    printf("        Your budgeted living expenses: ");
    scanf("%f", &expenses);
    printf("        Your actual living expenses: ");
    scanf("%f", &living);
    printf("        Your actual taxes withheld: ");
    scanf("%f", &taxes);
    printf("        Your actual tithe offerings: ");
    scanf("%f", &tithe);
    printf("        Your actual other expenses: ");
    scanf("%f", &other);
    printf("\n");
    printf("The followong is a report on your monthly expenses\n");
    printf("        Item                  Budget          Actual\n");
    printf("        =============== =============== ===============\n");
    printf("        Income          $    1000.00    $    %.2f\n", income);
    printf("        Taxes           $     100.00    $     %.2f\n", taxes);
    printf("        Tithing         $     100.00    $     %.2f\n", tithe);
    printf("        Living          $     650.00    $     %.2f\n", living);
    printf("        Other           $     150.00    $     %.2f\n", other);
    printf("        =============== =============== ===============\n");
    printf("        Diffrence       $       0.00    $     %.2f\n", (income - taxes - tithe - living - other));


    return 0;
}