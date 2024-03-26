#include <stdio.h>

int main(){
    int h,m,rent;
    scanf("%d %d",&h,&m);
    rent = 0;
    if(h==0&&m<=30){
        rent = 0;
    }
    else if(h>=7){
        rent = (h-6)*100;
        rent += 4*50;
        rent += 2*20;
        if (m>0){
            rent += 100;
        }
    }
    else if(h>=3){
        rent += (h-2)*50;
        rent += 2*20;
        if (m>0){
            rent += 50;
        }
    }
    else if(h>=1||m>30){
        rent += h*20;
        if (m>0){
            rent += 20;
        }
    }
    printf("%d",rent);
    return 0;
}

#include <stdio.h>
int main(){
    int hour, minute, money;
    scanf("%d %d", &hour, &minute);
    
    //เปลี่ยนเป็นนาที ไม่เอา 30 นาที
    minute+=hour*60;
    minute-=30;
    if(minute<0){ //ถ้าลบแล้วน้อยกว่า 0 ให้ปัดเป็น 0
        minute=0;
        hour=0;
    }
    else{
        hour=minute/60;
        minute-=hour*60;
    }
    
    if(minute>0){
        hour+=1;
        minute=0;
    }
    
    for(int i=1; i<=hour; i++){
        if(i>=7){
            money+=100;
        }
        else if(i>=3){
            money+=40;
        }
        else if(i>=1){
            money+=20;
        }
    }
    
    printf("%d %d\n", hour, minute);
    printf("%d", money);
    
    return 0;
}