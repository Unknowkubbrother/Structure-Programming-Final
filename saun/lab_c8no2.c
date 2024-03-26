#include <stdio.h>

float recursive(int n,float p,float rate){
    if(n==0){
        return p;
    }else{
        return rate*recursive(n-1,p,rate);
    }
}

int main(){
    int year=2558-2557;
    float priceStart = 25000000,rate= 0.9;
    printf("%.2f",recursive(year,priceStart,rate));
}