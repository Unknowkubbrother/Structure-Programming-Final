#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch;
    float sum = 0;
    int digitCount = 0;
    int a = 1;


    // เปิดไฟล์สำหรับอ่าน
    file = fopen("dataQ10.txt", "r");

    // ตรวจสอบว่าไฟล์เปิดได้หรือไม่
    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    // อ่านค่าจากไฟล์ตัวอักษรทีละตัว
    while ((ch = fgetc(file)) != EOF) {
        // ตรวจสอบว่าเป็นตัวเลขหรือไม่
        if (isdigit(ch)) {
            sum+= (ch - '0');
            digitCount++;
        }
    }

    // ปิดไฟล์
    fclose(file);

    // แสดงผลลัพธ์
    printf("Number of digits in the file: %d \ntotal : %.2f\n", digitCount,sum);

    

    return 0;
}
