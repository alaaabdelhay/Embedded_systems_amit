#include <stdio.h>

// Define struct
struct Student {
    char name[50];
    int age;
    float degree;
    int section;
};

// Function to print student data
void print(struct Student *s, int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d\n", i + 1);
        printf("Name    : %s\n", s[i].name);
        printf("Age     : %d\n", s[i].age);
        printf("Degree  : %.0f\n", s[i].degree);
        printf("Section : %d\n\n", s[i].section);
    }
}

int main() {
    // Array of 5 students
    struct Student students[5] = {
        {"Ahmed", 15, 88, 2},
        {"Sara", 16, 91, 1},
        {"Mohamed", 15, 76, 3},
        {"Aya", 16, 84, 2},
        {"Omar", 17, 69, 1}
    };

    // Call print function
    print(students, 5);

    return 0;
}
