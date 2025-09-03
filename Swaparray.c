#include <stdio.h>

int main() {
    
    int array[ ]= {1,2,3,4,5};
    int a,b ;
    int size= sizeof(array)/sizeof(array[0]);
    
    for(int i=0; i<size-1 ; i++){
        a=array[i];
        b=array[i+1];
        
        array[i]=b;
        array[i+1]=a;
    }
        
    for(int p=0; p<size; p++){
        printf("%d", array[p]);
    }
    

    return 0;
}
