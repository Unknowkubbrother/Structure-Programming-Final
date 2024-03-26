#include <stdio.h>

int recursive(int n){
    if(n==0){
        return 0;
    }else{
        return n+recursive(n-1);
    }
}

int main(){
    printf("%d",recursive(5));
}