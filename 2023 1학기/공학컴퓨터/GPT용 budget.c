#include <stdio.h>

int main() {
    float income, expenses, living, taxes, tithe, other;

    printf("This program keeps track of your monthly budget\n");
    printf("Please enter the following:\n");
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
    scanf_s("%f", &other);

    printf("\nThe following is a report on your monthly expenses\n");
    printf("        Item                  Budget          Actual\n");
    printf("        ===============     ===============   ===============\n");
    printf("        Income          $    %10.2f    $    %10.2f\n", 1000.0, income);
    printf("        Taxes           $     %10.2f    $     %10.2f\n", 100.0, taxes);
    printf("        Tithing         $     %10.2f    $     %10.2f\n", 100.0, tithe);
    printf("        Living          $     %10.2f    $     %10.2f\n", 650.0, living);
    printf("        Other           $     %10.2f    $     %10.2f\n", 150.0, other);
    printf("        ===============     ===============   ===============\n");
    printf("        Difference      $       %10.2f    $       %10.2f\n", 0.0, (float)(income - taxes - tithe - living - other));

    return 0;
}
