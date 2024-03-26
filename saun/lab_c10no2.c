#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
    float z;
}vector3D;


float FindLength(vector3D vector){
    return sqrt(pow(vector.x,2)+pow(vector.y,2)+pow(vector.z,2));
}

int main(){
    int N;
    scanf("%d",&N);
    vector3D vector[N];
    for(int i=0;i<N;i++){
        scanf("%f %f %f",&vector[i].x,&vector[i].y,&vector[i].z);
    }
    for(int i=0;i<N;i++){
        printf("%.2f\n",FindLength(vector[i]));
    }

    return 0;
}