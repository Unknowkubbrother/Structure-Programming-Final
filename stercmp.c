#include <stdio.h>
#include <string.h>

int main(){
    printf("%d\n",strcmp("test","test")); //0
    printf("%d\n",strcmp("A","Z")); // -1
    printf("%d\n",strcmp("Z","A")); // 1
    return 0;
}