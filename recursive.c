#include <stdio.h>

int f(int *a,int n){
    printf("test => %d/n",*a);
    if(n<=0){
        return 0;
    }else if(*a%2==0){
        return *a+f(a+1,n-1);
    }else{
        return *a-f(a+1,n-1);
    }
}


int main(){
    int a[6] = {12,7,13,4,11,6};
    // printf("%d", 12 +(7 (-13(-4(+ 11(- 6))))));
    printf("%d",12+7-13+4+11-6);
    return 0;
}