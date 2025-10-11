#include <stdio.h>
#include <stdbool.h>

void main(){
	int user_number;
	printf("input your number here:");
	scanf("%d",&user_number);
	 int i;
	for(i=0;user_number!=0;i++){
	    
		user_number=user_number/10;
	}
	printf("%d",i);
	// gtihub 
}
