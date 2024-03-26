#include <stdio.h>
struct student
{
    int id;
    char name[20];
    int marks;
};

void accept(struct student list[], int s);//รับข้อมูล
void display(struct student list[], int s);//แสดงข้อมูลจาก Struct
void bsortDesc(struct student list[], int s);//เรียงลำดับตามคะแนน Bubble Sort

int main(){
    struct student data[20];
    int n;

    printf("Number of records you want to enter?: ");
    scanf("%d", &n);

    accept(data, n);
    printf("\nBefore sorting");
    display(data,n);
    bsortDesc(data,n);
    printf("\nAfter sorting");
    display(data,n);
}

void accept(struct student list[80], int s){
    int i;
    for(i=0; i<s; i++){
        printf("\nEnter data for Record #%d", i+1);
        printf("\nEnter ID: ");
        scanf("%d", &list[i].id);
        printf("Enter Name: ");
        scanf("%s", list[i].name);
        printf("Enter Marks: ");
        scanf("%d", &list[i].marks);
    }

}

void display(struct student list[80],int s){
    int i;
    printf("\nID\tName\tMarks");
    for(i=0;i<s;i++){
        printf("\n%d\t%s\t%d", list[i].id, list[i].name, list[i].marks);
    }
    printf("\n");
}

void bsortDesc(struct student *list, int s){
    int i,j;
    struct student temp;

    for(i=0;i<s-1;i++){
        for(j=0;j< (s-1-i);j++){
            if(list[j].marks<list[j+1].marks){
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}