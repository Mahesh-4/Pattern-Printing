
#include<stdio.h>

int main(){
	int rows = 0, columns = 0, i,j,ch=97;

	printf("Enter the number of rows: ");
	scanf("%d",&rows);

	printf("Enter the number of col8umns: ");
	scanf("%d",&columns);

	for(i=0;i<rows;i++){

		for(j=0;j<columns;j++){

			if(i%2 == 0){
				printf("%d	",j+1);
			}
			else{
				printf("%c	",ch+j);
			}
		}

		printf("\n");
	}

}
