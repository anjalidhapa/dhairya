#include <stdio.h>
#include <conio.h>
void main() {
	int i,j;
	int arr1[3][3]={
		{1,4,6},
		{5,8,2},
		{7,2,1}
	};
	int arr2[3][3]={
		{3,7,6},
		{6,2,8},
		{4,5,9},
	};
	int arr3[3][3];
	clrscr();
	for (i = 0; i < 3; i ++){
		for (i = 0;i < 3;i ++){
			printf("%d",arr1[i][j]);
		} printf("\n");
	}
	for (i = 0;i < 3 ;i ++){
		for (j = 0;j < 3; j ++){
			printf("%d",arr[i][j]);
		} printf("\n");
	}
	for (i = 0;i < 3; i ++){
		for (j = 0;j < 3;j ++){
			arr3=arr1[i][j]+arr2[i][j];
		}
		printf("%d",arr3);

	}

	getch();
}


