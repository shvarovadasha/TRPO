#include <stdio.h>
#include <stdlib.h>
void main()
{
	char login[10], password[8];
	int i;
	printf ("-------------------AUTHORIZATION--------------------\n");
	printf ("LOGIN: "); // gets(login)
    scanf("%s", login);
	printf ("PASSWORD (any 8 numbers): ");
	for (i = 0; i < 8; i ++)
	{
		password[i] = getchar();
		printf ("*");
	}
	password[i] = '\0';
	printf ("\n\n Press any key to continue");
	getch ();
	
}