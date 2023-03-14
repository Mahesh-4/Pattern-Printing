#include<stdio.h>

int main(){
	int rows = 0, columns = 0, i,j,ch=65;

	printf("\n\n\n\n\nEnter the number of rows: ");
	scanf("%d",&rows);

	printf("\nEnter the number of columns: ");
	scanf("%d",&columns);

	for(i=0;i<rows;i++){

		for(j=0;j<columns;j++){

			if(j%2 == 0){
				printf("$	");
			}
			else{
				printf("=	");
			}

		}
		printf("\n");
	}

}
