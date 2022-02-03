#include <stdio.h>
#include <stdlib.h>

int main ()
{
	printf("\n\n");
	int i,j,number;
	int *letter;

 	int array[7][4];


  	printf("enter 0 or 1 to draw your character:\n");

  	for(i=0;i<7;i++){
  		for(j=0;j<4;j++){

  			printf("enter 0 or 1 at row %d, column %d\n",(i+1),(j+1));
  			scanf("%d",&number);

  			if(number==1){
  			array[i][j]= 1;
	 		}
	  		else if (number==0){
	  		array[i][j] = 0;
	 	 	}

	  	}

 		printf("\n");
	  }


	printf("\n\n");
	printf("the character you entered is shown below\n");

	for(i=0;i<7;i++){
  		for(j=0;j<4;j++){
  			*letter;
 		letter=&array[i][j];
 		if (*letter==1){

 		printf("
		 |*| ");
 		}
 		 else {
  		printf("");}



  		}
	printf("\n");

	}

}    