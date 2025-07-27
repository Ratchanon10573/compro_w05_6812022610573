#include <stdio.h>

int main() { // ฟังก์ชันหลักของโปรแกรม
    //ประกาศตัวแปร
    char fisst_name; //ตัวแปรชนิด char สำหรับเก็บค่าอักษร 1 ตัว
    int age; // ตัวแปรชนิด int สำหรับเก็บค่าจำนวนเต็ม
    float weight; // ตัวแปรชนิด float สำหรับเก็บนค่าทศนิยม

    printf("Enter your first name, age, and weight (e.g. A 25 70.5): "); // แสดงข้อความให้ผู้ใช้ป้อนข้อมูล
    scanf("%c %d %f", &fisst_name, &age, &weight); // รับค่าจากผู้ใช้ โดยใช้ scanf
    // %c สำหรับตัวอักษร, %d สำหรับจำนวนเต็ม, %f สำหรับทศนิยม
    // & ใช้เพื่อส่งที่อยู่ของตัวแปรไปยัง scanf

    printf("\nStudent %c is %d years old.\nHis weight is %.1f kg.\n", fisst_name, age, weight); // แสดงผลข้อมูลที่รับมา

    return 0;

}