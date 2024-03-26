#include <stdio.h>

struct moneytype{
	int m1000;
	int m500;
	int m100;
	int m50;
	int m20;
	int m10;
	int m1;
}moneyput={0,0,0,0,0,0,0};
void add(int n,int money){
	switch(money){
		case 1000: moneyput.m1000 += n;break;
		case 500: moneyput.m500 += n;break;
		case 100: moneyput.m100 += n;break;
		case 50: moneyput.m50 += n;break;
		case 20: moneyput.m20 += n;break;
		case 10: moneyput.m10 += n;break;
		case 1: moneyput.m1 += n;break;
	}
}

void checkmoney(int money){
	int n,i,moneyarray[7] = {1000,500,100,50,20,10,1};
	for(i=0;i<7;i++){
		n = moneyarray[i];
		if (money>=n){
			add(money/n,n);
			money -= (money/n)*n;
		}
	}
}

int main(){
	int money;
	scanf("%d",&money);
	checkmoney(money);
	printf("%d %d %d %d %d %d %d",moneyput.m1000,moneyput.m500
	,moneyput.m100,moneyput.m50,moneyput.m20,moneyput.m10,moneyput.m1);
}
