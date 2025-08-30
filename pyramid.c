#include <stdio.h>

void main(){
	for (int i=0; i<4; i++){

		for(int m=3 ; m>i ; m--){
				printf(" ");}
			
		for (int p=0; p-i<0 ; p++){

			printf("* ");
		}
		printf("\n");
	}
}
