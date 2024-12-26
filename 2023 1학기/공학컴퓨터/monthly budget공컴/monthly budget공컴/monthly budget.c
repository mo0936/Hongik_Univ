#include<stdio.h>
int main() 
{
	int a, b, c, d, e, f;
	printf("This program keeps track of your monthly budget");
	printf("Please enter the follwing:");
	printf("        Your monthly income: ");
	scanf("%f",&a);
	printf("        Your budgeted living expenses: ");
	scanf("%f",&b);
	printf("        Your actual living expenses: ");
	scanf("%f",&c);
	printf("        Your actual taxes withheld: ");
	scanf("%f",&d);
	printf("        Your actual tithe offerings: ");
	scanf("%f",&e);
	printf("        Your actual other expenses: ");
	scanf("%f",&f);
	printf("");
	printf("The followong is a report on your monthly expenses");
	printf("        Item                  Budget          Actual");
	printf("        =============== =============== ===============");
	printf("        Income          $    1000.00    $    %f", a);
	printf("        Taxes           $     100.00    $     %f", d);
	printf("        Tithing         $     100.00    $     %f", e);
	printf("        Living          $     650.00    $     %f", c);
	printf("        Other           $     150.00    $     %f", f);
	printf("        =============== =============== ===============");
	scanf("%f", (a - d - e - c - f));
	printf("        Diffrence       $       0.00    $     %f,",(a - d - e - c - f));


	return 0;
}