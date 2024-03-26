#include <stdio.h>

typedef struct passbyValueandReferance
{
    int id;
    char name[20];
    int marks;
} student;

void display(student list[2]){ // *list เหมือน list[]
    printf("\n%d\t%s\t%d", list[0].id, list[0].name, list[0].marks);
};

void display1(student list){
    printf("\n%d\t%s\t%d", list.id, list.name, list.marks);
};

// int *ptr;
// int a = 10;
// ptr = &a;


int main(){
    student data[2];
    strcpy(data[0].name,"John");
    data[0].id = 1;
    data[0].marks = 50;
    strcpy(data[1].name,"Doe");
    data[1].id = 2;
    data[1].marks = 60;
    display(data);
    display1(data[0]);
}