

//	Pattern58.				d
//					c	c	c
//				b	b	b	b	b
//			a	a	a	a	a	a	a


#include<stdio.h>


int Pattern58(int rows){

	if(rows<=0){
	
		printf("Invalid input\n");
		return 0;
	}else{
	
		for(int row = 1; row<=rows; row++){
		
			for(int col = 1; col <= rows+row-1; col++)
				if(col<=rows-row)
					printf("\t");
				else
					printf("%c\t", 97+rows-row);

			printf("\n");
		}

		return 1;
	}
}

void main(){

	int rows = 0;

	printf("Enter no. of rows : ");
	scanf("%d", &rows);

	Pattern58(rows);
}
