//Half pyramid of alphabates

#include<stdio.h>


int main(){
	int rows = 0, columns = 0, i,j,no=1,odd=3;
	char ch = 'A';

	printf("\nEnter the number of rows: ");
	scanf("%d",&rows);

	printf("\nEnter the number of columns: ");
	scanf("%d",&columns);

	printf("\n");

	for(i=1;i<=rows;i++){

		for(j=0;j<i;j++){

			printf(" %c",ch);
			//printf(" %c",ch);
			//ch++;
		}

		printf("\n");
	}

}
