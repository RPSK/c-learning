#include <stdio.h>

int main() {
    
    int array[]={2,5,3,7,9,1};
    int maxnum =0 ;
    int size= sizeof(array)/sizeof(array[0]);
    for(int i=0; i<=size; i++){
        if(array[i]>maxnum){
           maxnum= array[i];
           
        }
    }
    printf("%d", maxnum);

    return 0;
}
