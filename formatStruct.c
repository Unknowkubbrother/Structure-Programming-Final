#include <stdio.h>

struct data1{
    char name[30];
    int score;
} data1_d1,data1_d3;

typedef struct data1 data1_d2;

typedef struct
{
    char name[30];
    struct data1 detail;
}data2;

void addrecord1(data2 *data){
    scanf("%d",&data->detail.score);
}

void addrecord2(data2 *data,int N){ // หรือ void addrecord2(data2 data[2],int N)
    for(int i=0;i<N;i++){
        scanf("%d",&data[i].detail.score);
    }
}

void addrecord3(data2 *data){
    scanf("%d",&data->detail.score);
}

int main(){
    data2 data2_d1;
    data2 data2_d2[2];
    
    data1_d2 data1_d4;
    addrecord1(&data2_d1);
    addrecord2(data2_d2,2);
    for(int i=0;i<2;i++){
        addrecord3(&data2_d2[i]);
    }



    return 0;
}