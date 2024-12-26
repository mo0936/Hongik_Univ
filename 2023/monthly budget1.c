#include<stdio.h>
int main() 
{
	int income, expenses, living, taxes, tithe, other;
	printf("This program keeps track of your monthly budget");
	printf("Please enter the follwing:");
	printf("        Your monthly income: ");
	scanf("%f",&income);
	printf("        Your budgeted living expenses: ");
	scanf("%f",&expenses);
	printf("        Your actual living expenses: ");
	scanf("%f",&living);
	printf("        Your actual taxes withheld: ");
	scanf("%f",&taxes);
	printf("        Your actual tithe offerings: ");
	scanf("%f",&tithe);
	printf("        Your actual other expenses: ");
	scanf("%f",&other);
	printf("");
	printf("The followong is a report on your monthly expenses");
	printf("        Item                  Budget          Actual");
	printf("        =============== =============== ===============");
	printf("        Income          $    1000.00    $    %f", income);
	printf("        Taxes           $     100.00    $     %f", taxes);
	printf("        Tithing         $     100.00    $     %f", tithe);
	printf("        Living          $     650.00    $     %f", living);
	printf("        Other           $     150.00    $     %f", other);
	printf("        =============== =============== ===============");
	scanf("%f", (income-taxes-tithe-living-other));
	printf("        Diffrence       $       0.00    $     %f,", (income - taxes - tithe - living - other));


	return 0;
}