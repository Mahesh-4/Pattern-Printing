#include<stdio.h>

int main(){
	int rows = 0, columns = 0, i, j, no = 1;

	printf("\nEnter the number of rows: ");
	scanf("%d",&rows);

	printf("\nEnter the number of columns: ");
	scanf("%d",&columns);

	printf("\n");

	for(i=0;i<rows;i++){

		for(j=0;j<columns;j++){

			if(j%2 == 0){
				printf("%d	", no*no);
			}
			else{
				printf("%d	", no);
			}
			no++;

		}
		printf("\n");
	}

}
