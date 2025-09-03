#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){

    printf("ENTER YOUR WORD HERE : ");
    char word[10];

    scanf("%s", word);
    bool palidrome = false ;

    int size= strlen(word);

    for (int i=0; i<=size-1; i++){
        
        if(word[i]==word[size-i-1]){
            palidrome=true;
        }
        else{
            palidrome=false;
            break;
        }
    }
    if(palidrome=true){
        printf("YOUR WORD IS A PALIDROME !");
    }
    else{
        printf("YOUR NUMBER IS NOT A PALIDRONME....");
    }
    return 0 ;
}
