#include <stdio.h>
#include <math.h>

int factorial(int n){
    if(n==0){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

int plus(int n){
    if(n==0){
        return 0;
    }
    else{
        return n+plus(n-1);
    }
}

int main(){
    printf("plus => %d",plus(4));
    printf("\nfactorial => %d",factorial(4));
}