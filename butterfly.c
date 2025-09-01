#include <stdio.h>

int main(){

	for(int i=0; i<8; i++){

		if(i<4){

			for(int p=0 ; p<=i; p++){
				printf("*");
			}
			for(int q=0; q<= 5-2*i; q++){
				printf(" ");
			}
			for(int p=0 ; p<=i; p++){
				printf("*");
			}
			printf("\n");
		}

		if(i>4){

			for(int p=8 ; p>i; p--){
				printf("*");
			}
			for(int q=0; q<=2*(i-4)-1; q++){
				printf(" ");
			}
			for(int r=8; r>i; r--){
				printf("*");
			}
			printf("\n");
		}

	}
	return 0;
}
