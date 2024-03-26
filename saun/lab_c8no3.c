#include <stdio.h>

int recursive(int n){
    if(n==0){
        return 0;
    }else if(n == 1){
        return 1;
    }
    else{
        return recursive(n-1)+recursive(n-2);
    }
}
int main(){
    printf("%d",recursive(5));
}