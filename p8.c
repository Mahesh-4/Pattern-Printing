#include<stdio.h>

int main(){
	int rows = 0, columns = 0, i,j,no=1;

	printf("\nEnter the number of rows: ");
	scanf("%d",&rows);

	printf("\nEnter the number of col8umns: ");
	scanf("%d",&columns);

	printf("\n");
	
	for(i=0;i<rows;i++){

		for(j=0;j<columns;j++){

			printf("%d	",no);
			no+=2;
		}

		printf("\n");
	}

}
