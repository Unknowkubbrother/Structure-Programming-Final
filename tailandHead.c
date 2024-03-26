#include <stdio.h>

void tail(int n){
    if(n==1){
        return;
    }else{
        printf("%d\n",n);
    }
    tail(n-1);
}

void head(int n){
    if(n==1){
        return;
    }else{
        head(n-1);
    }
    printf("%d\n",n);
}

int main(){
    int n=5;
    printf("Tail\n");
    tail(n);
    printf("Head\n");
    head(n);
    return 0;
}