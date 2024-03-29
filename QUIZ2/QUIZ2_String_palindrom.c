#include <stdio.h>
#include <string.h>
#include <ctype.h>

void palindrome(char str[]){
    int start = 0,end=strlen(str);
    int count=0;
    for(int i=0;i<end/2;i++){
        if(str[i] >= 'A' && str[i] <='Z'){
            str[i] = tolower(str[i]);
        }
        if(str[end-1-i] >= 'A' && str[end-1-i] <='Z'){
            str[end-1-i] = tolower(str[end-1-i]);
        }
        
        if(str[i]!=str[end-1-i]){
            count++;
            break;
        }
    } 
    if(!count){
        printf("palindrome\n");
    }else{
        printf("not palindrome\n");
    }
}

int main(){
    int N;
    scanf("%d",&N);
    char str[N][30];
    for(int i=0;i<N;i++){
        scanf("%s",str[i]);
    }
    for(int i=0;i<N;i++){
        palindrome(str[i]);
    }
}