#include<conio.h>
#include<stdio.h>

// find small & max number in 2d array 


int max( int aray [3][3]){    // find max number function

	int number=1;
	int max;
	
	for(int a=0;a<=2;a++){
		for(int b=0;b<=2;b++){
			
		if(aray[a][b]>number){
		
			max=aray[a][b];		
                            }
		
		}
		
			printf("\n");
		}
	
	printf("max number =  %d",max);
}


int small( int array [3][3]){    // find small number function

	int number=1;
	int small;
	
	for(int a=0;a<=2;a++){
		for(int b=0;b<=2;b++){
			
		if(array[a][b]<=number){
		
		small=array[a][b];		
                            }
		
		}
		
			printf("\n");
		}
	
	printf("small number =  %d",small);
}


int main(){    // main method
	
	int array[3][3]={ {1,2,3}  , {4,5,6}  , {7,8,9}   };
	max(array);
	
	
	small(array);
	
	
	
	
	
	
}
