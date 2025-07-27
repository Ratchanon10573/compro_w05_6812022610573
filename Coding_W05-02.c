#include <stdio.h>

int main() { // ฟังก์ชันหลักของโปรแกรม
    // ประกาศตัวแปร
    char name[30]; // ตัวแปร char สำหรับเก็บชื่อแบบ string
    int age; // ตัวแปร int สำหรับเก็บอายุจำนวนเต็ม
    float height; // ตัวแปร float สำหรับเก็บส่วนสูงทศนิยม
    char subjects; // ตัวแปร char สำหรับเก็บวิชา
    float grade_score; // ตัวแปร float สำหรับเก็บคะแนน
    char letter_grade; // ตัวแปร char สำหรับเก็บเกรดตัวอักษร

    printf("Enter your name, age, height (e.g. J 20 175): "); // แสดงข้อความให้ผู้ใช้ป้อนข้อมูล
    scanf("%s %d %f", name, &age, &height); // รับค่าจากผู้ใช้ โดยใช้ scanf เก็บข้อมูลชื่อ, อายุ และส่วนสูง
    // %s สำหรับ string, %d สำหรับจำนวนเต็ม, %f สำหรับทศนิยม & ใช้เพื่อส่งที่อยู่ของตัวแปรไปยัง scanf
    printf("Enter your subject, score, and grade (e.g. M 3.50 A): "); // แสดงข้อความให้ผู้ใช้ป้อนข้อมูล
    scanf(" %c %f %c", &subjects, &grade_score, &letter_grade); // รับค่าจากผู้ใช้ โดยใช้ scanf เก็บข้อมูลวิชา, คะแนน และเกรด
    // %c สำหรับตัวอักษร, %f สำหรับทศนิยม, & ใช้เพื่อส่งที่อยู่ของตัวแปรไปยัง scanf
    printf("\n%s is %d years old and %.1f centimeters tall.\n", name, age, height); // แสดงผลข้อมูลที่รับมา
    // แสดงชื่อ, อายุ และส่วนสูง
    printf("In subject %c, %s got %.2f Which is symbolized \'%c\'.\n", subjects, name, grade_score, letter_grade);
    // แสดงผลข้อมูลที่รับมาวิชา, ชื่อ, คะแนน และเกรดตัวอักษร
    
    return 0; // คืนค่า 0 เพื่อบอกว่าการทำงานสำเร็จ
}
