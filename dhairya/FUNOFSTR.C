#include <stdio.h>
#include <conio.h>
#include <string.h>
void main () {
	char a[40],b[40];
	int choise;
	int i;
	clrscr ();
	printf("Enter number:");
	scanf("%s",&a);

	printf("\n a.length \n b.copy \n c.merge \n d.compare \n e.exit\n");

	printf("Enter your choise :");
	scanf("%s",& choise);


	switch (choise) {
		case 'a':
			i=strlen(a);
			puts(a);
		break;
		case 'b':
			printf("Enter ohter string:");
			scanf ("%s",b);
			strcpy(b,a);
			puts(b);
		break;
		case 'c':
			strcat (a,b);
			puts(a);
		break;
		case 'd':
			printf("Enter ohter string:");
			scanf ("%s",b);
			i=strcmp (a,b);
			if (i==0)
				printf(" equal");
			else
				printf("not equal");
		break;
		case 'e':
			printf("exit");
		break;


	}
	getch ();
}