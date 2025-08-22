#include <stdio.h>
#include "SDB.h"

#define MAX_STUDENTS 10

student database[MAX_STUDENTS];
uint8 student_count = 0;

/*
 * Function: SDB_IsFull
 * ----------------------------
 *   Check if database is full (10 students).
 */
bool SDB_IsFull() {
    return (student_count >= MAX_STUDENTS) ? true : false;
}

/*
 * Function: SDB_GetUsedSize
 * ----------------------------
 *   Return number of students in DB.
 */
uint8 SDB_GetUsedSize() {
    return student_count;
}

/*
 * Function: SDB_AddEntry
 * ----------------------------
 *   Add new student to DB if not full.
 */
bool SDB_AddEntry() {
    if (SDB_IsFull()) {
        printf("Database is full. Cannot add more students.\n");
        return false;
    }

    student s;
    printf("Enter Student ID: ");
    scanf("%u", &s.Student_ID);

    if (SDB_IsIdExist(s.Student_ID)) {
        printf("ID already exists!\n");
        return false;
    }

    printf("Enter Student Year: ");
    scanf("%u", &s.Student_year);

    printf("Enter Course1 ID and Grade: ");
    scanf("%u %u", &s.Course1_ID, &s.Course1_grade);

    printf("Enter Course2 ID and Grade: ");
    scanf("%u %u", &s.Course2_ID, &s.Course2_grade);

    printf("Enter Course3 ID and Grade: ");
    scanf("%u %u", &s.Course3_ID, &s.Course3_grade);

    database[student_count++] = s;
    printf("Student added successfully!\n");

    return true;
}

/*
 * Function: SDB_DeletEntry
 * ----------------------------
 *   Delete student by ID.
 */
void SDB_DeletEntry(uint32 id) {
    for (uint8 i = 0; i < student_count; i++) {
        if (database[i].Student_ID == id) {
            for (uint8 j = i; j < student_count - 1; j++) {
                database[j] = database[j + 1];
            }
            student_count--;
            printf("Student with ID %u deleted.\n", id);
            return;
        }
    }
    printf("ID not found.\n");
}

/*
 * Function: SDB_ReadEntry
 * ----------------------------
 *   Print student data by ID.
 */
bool SDB_ReadEntry(uint32 id) {
    for (uint8 i = 0; i < student_count; i++) {
        if (database[i].Student_ID == id) {
            printf("\nStudent ID: %u\n", database[i].Student_ID);
            printf("Year: %u\n", database[i].Student_year);
            printf("Course1: %u Grade: %u\n", database[i].Course1_ID, database[i].Course1_grade);
            printf("Course2: %u Grade: %u\n", database[i].Course2_ID, database[i].Course2_grade);
            printf("Course3: %u Grade: %u\n", database[i].Course3_ID, database[i].Course3_grade);
            return true;
        }
    }
    printf("ID not found.\n");
    return false;
}

/*
 * Function: SDB_GetList
 * ----------------------------
 *   Get list of all student IDs.
 */
void SDB_GetList(uint8 *count, uint32 *list) {
    *count = student_count;
    for (uint8 i = 0; i < student_count; i++) {
        list[i] = database[i].Student_ID;
    }
}

/*
 * Function: SDB_IsIdExist
 * ----------------------------
 *   Check if ID exists.
 */
bool SDB_IsIdExist(uint32 id) {
    for (uint8 i = 0; i < student_count; i++) {
        if (database[i].Student_ID == id) {
            return true;
        }
    }
    return false;
}
