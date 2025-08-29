#include <stdio.h>
#include <stdbool.h>

int main(){
	int newarray[5];
	printf("enter your numbers and type 0 to end:\n");
	int user_number=1;
	for (int i=0;user_number!=0;i++){

		scanf("%d",&user_number);
		newarray[i]=user_number;
        }

    
    int lengthofarray=sizeof(newarray)/sizeof(newarray[0]);
    int array[5];
    
    for (int p=0;lengthofarray-p>0;p++){

    		array[p]=newarray[lengthofarray-p];

    }
    int s;
    for(s=0;s<lengthofarray;s++){
    	printf("%d ",array[s]);
    }
    return 0;
}
