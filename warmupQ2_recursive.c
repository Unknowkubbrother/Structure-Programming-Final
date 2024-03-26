#include <stdio.h>

int add(int pk,int pm);
int main(){
    int k,i,m;
    m=2;
    k=3;
    i=add(k,m);
    printf("Sum of %d + %d is %d",k,m,i);
}

int add(int pk,int pm){
    if(pm == 0){
        return pk;
    }else{
        return 1+add(pk,pm-1);
    }
}