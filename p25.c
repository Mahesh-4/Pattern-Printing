//inverted full pyramid

#include<stdio.h>


int main(){
	int rows = 0, columns = 0,space=0, i,j,no=1,odd=3;

	printf("\nEnter the number of rows: ");
	scanf("%d",&rows);

	printf("\nEnter the number of columns: ");
	scanf("%d",&columns);

	printf("\n");

	for(i=rows;i>=1;i--){

		for(j=0;j<i;j++){

			printf(" *");		//for printing stars
			

		}

		printf("\n");
	}

}
