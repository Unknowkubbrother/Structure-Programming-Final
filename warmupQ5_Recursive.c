#include <stdio.h>

float money(int n,int p,float rate){
    if(n==0){
        return p;
    }else{
        return rate*money(n-1,p,rate);
    }
}

int main(){
    int n=30,p=10000;
    float pn,rate=5;
    rate = rate/100+1;
    printf("%.2f",money(n,p,rate));
    
    return 0;
}