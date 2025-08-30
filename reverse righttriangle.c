#include <stdio.h>

void main(){
	for (int i=0; i<3; i++){



		for(int m=0 ; m<i ; m++){
				printf(" ");}
			
		for (int p=3; p-i>0 ; p--){

			printf("*");
		}
	
		printf("\n");
	}
}
