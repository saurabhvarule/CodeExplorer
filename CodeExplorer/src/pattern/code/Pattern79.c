

//	Pattern79.	1	
//			1	2		
//			1	2	3		
//			1	2	3	4
//			1	2	3
//			1	2
//			1


#include<stdio.h>


int Pattern79(int rows){

	if(rows<=0){
	
		printf("Invalid input\n");
		return 0;
	}else{
	
		for(int row = 1, temp = 0; row<=rows; row++){

			if(row<=rows/2)
				temp = row;
			else
				temp = rows+1-row;
		
			for(int col = 1; col <= temp; col++)
				printf("%d\t", col);

			printf("\n");
		}

		return 1;
	}
}

void main(){

	int rows = 0;

	printf("Enter no. of rows : ");
	scanf("%d", &rows);

	Pattern79(rows*2-1);
}
