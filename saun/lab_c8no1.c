#include <stdio.h>

float recursive(float ps,int n,float rate){
    if(n==0){
        return ps;
    }else{
        return rate*recursive(ps,n-1,rate);
    }
}

int main(){
    float ps,rate;
    int n;
    printf("เงินต้น: ");
    scanf("%f",&ps);
    printf("ดอกเบี้ยต่อปี: ");
    scanf("%f",&rate);
    printf("จำนวนปี: ");
    scanf("%d",&n);
    rate = (1+(rate/100));
    printf("%.2f",recursive(ps,n,rate));
}