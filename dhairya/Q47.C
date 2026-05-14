#include <stdio.h>
#include <conio.h>
void main() {
	int i,j;
	int arr1[3][3],arr2[3][3],arr3[3][3];
	clrscr();

	for (i = 0;i < 3; i ++){
		for (j = 0;j < 3;j ++){
			printf("enter value for array 1 of [%d][%d]:",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	for (i = 0;i < 3; i ++){
		for (j = 0;j < 3;j ++){

			printf("enter value for array 2 of [%d][%d]:",i,j);
			scanf("%d",&arr2[i][j]);
		}
	}
	for (i = 0;i < 3; i ++){
		for (j = 0;j < 3;j ++){
			arr3[i][j]=arr1[i][j]+arr2[i][j];
			printf("%d\t",arr3[i][j]);
		}
		printf("\n");
	}

	getch();
}


