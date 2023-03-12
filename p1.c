#include<stdio.h>

int main(){
	int rows = 0, columns = 0, i,j;
	
	printf("Enter the number of rows: ");
	scanf("%d",&rows);

	printf("Enter the number of col8umns: ");
	scanf("%d",&columns);

	for(i=0;i<rows;i++){

		for(j=1;j<=columns;j++){

			printf("%d  ",j + i );

		}
		
		printf("\n");
	}
}
	
