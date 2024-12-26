#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void myprint(char* name,char *ID);

int main() {
	char name[50];
	char ID[20];

	printf("Please, type your English name & Student ID: ");
	scanf("%[^,], %s", name, ID);
	
	myprint(name, ID);

	return 0;
}

void myprint(char *name, char *ID) {

	printf("Your Name is %s\n", name);
	printf("Your Student ID is %s", ID);
}
