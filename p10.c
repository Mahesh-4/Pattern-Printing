#include<stdio.h>


int main(){
	int rows = 0, columns = 0, i,j,no,ch;

	printf("\nEnter the number of rows: ");
	scanf("%d",&rows);

	printf("\nEnter the number of columns: ");
	scanf("%d",&columns);

	printf("\n");

	for(i=0;i<rows;i++){
		no=4,ch=68;
		for(j=0;j<columns;j++){

			printf("%c%d	",ch,no);
			ch--;
			no--;
		}

		printf("\n");
	}

}
