#include <stdio.h>
#include <math.h>

typedef struct
{
 int x;
 int y;
}POINT;

int Dist (POINT Point1, POINT Point2){
    return sqrt(pow((Point1.x - Point2.x),2) + pow((Point1.y - Point2.y),2));
};

int main(){
    int N;
    scanf("%d",&N);
    POINT point[N];
    int Quadrant;
    for(int i=0;i<N;i++){
        scanf("%d %d",&point[i].x,&point[i].y);
    }
    for(int i=0;i<N;i++){
        if(point[i].x > 0 && point[i].y > 0){
            Quadrant = 1;
        }else if(point[i].x < 0 && point[i].y > 0){
            Quadrant = 2;
        }else if(point[i].x < 0 && point[i].y < 0){
            Quadrant = 3;
        }else if(point[i].x > 0 && point[i].y < 0){
            Quadrant = 4;
        }
        printf("%d\n",Quadrant);
    }
    printf("%d",Dist(point[0],point[1]));
    return 0;
}