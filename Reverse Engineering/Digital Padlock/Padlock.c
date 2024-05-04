#include <stdio.h>
#include <string.h>

/*
Reference: 
1. https://www.w3schools.com/c/c_strings.php //Modify Strings
									--Dev
*/

int main()
{
	char pin[5], input[5];
	
	printf("This is a digital padlock. Please enter your 4-digit pin to unlock it.");
	printf("\nEnter pin: ");
	scanf("%s", input);
	
	pin[0] = input[2];
	pin[1] = input[3];
	pin[2] = input[0];
	pin[3] = input[1];
	
	if (strcmp(pin, "1234") == 0)
	{
		printf("Kachak! Padlock unlocked. Here is your flag: CTFPrep{%s}", input);
	}
	else
	{
		printf("Wrong pin!");
	}
}