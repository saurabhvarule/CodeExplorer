

//	Pattern104.				1	
//					1	2	1	
//				1	2	3	2	1
//			1	2	3	4	3	2	1
//				1	2	3	2	1
//					1	2	1
//						1


#include<stdio.h>


int Pattern104(int rows){

	if(rows<=0){
	
		printf("Invalid input\n");
		return 0;
	}else{
	
		for(int row = 1, temp = 0; row<=rows; row++){

			if(row<=rows/2)
				temp = row;
			else
				temp = rows+1-row;

			for(int col = 1, num = 1; col <= rows/2+temp; col++)
				if(row<=rows/2){
					if(col<=rows/2+1-row)
						printf("\t");
					else{
						if(col<rows/2+1)
							printf("%d\t", num++);
						else
							printf("%d\t", num--);
					}
				}else{
					if(col<=rows/2-(rows-row))
						printf("\t");
					else{
						if(col<rows/2+1)
							printf("%d\t", num++);
						else
							printf("%d\t", num--);
					}
				}

			printf("\n");
		}

		return 1;
	}
}

void main(){

	int rows = 0;

	printf("Enter no. of rows : ");
	scanf("%d", &rows);

	Pattern104(rows*2-1);
}
