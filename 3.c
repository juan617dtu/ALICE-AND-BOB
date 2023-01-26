#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char name[100], bob[] = "Bob", alice[] = "Alice";
	
	printf("Enter your name: ");
	scanf("%[^\n]", &name);
	
	name[0] = toupper(name[0]);
	for (int i = 1; i < strlen(name); i++)
	{
		name[i] = tolower(name[i]);
	}

	if (strcmp(name, bob) == 0 || strcmp(name, alice) == 0)
	{
		printf("\nHello, %s. I hope you are good\n", name);
	}
	else
	{
		printf("\nSorry! I am not supposed to greet you, %s\n", name);
	}

	return 0;
}
