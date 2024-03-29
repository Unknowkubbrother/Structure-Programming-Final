#include <stdio.h>

int fibonacci(n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main(){
    printf("%d",fibonacci(2));
    return 0;
}