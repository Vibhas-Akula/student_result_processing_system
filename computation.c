#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "record_structure.h"

void compute_percentages() {
    for(int i = 0; i < 10; i += 2) {
        int j = (i + 1) / 2;
        int total = student_records[count - 1].marks[i] + student_records[count - 1].marks[i + 1];
        student_records[count - 1].total[j] = total;
        student_records[count - 1].percent[j] = (float)total;
    }
}

void compute_grades() {
    for(int i = 0; i < 10; i += 2) {
        int j = (i + 1) / 2;
        int total = student_records[count - 1].total[j];
        if(total >= 90) {
            strncpy(student_records[count - 1].grade[j], "O", sizeof(student_records[count - 1].grade[j]) - 1);
            student_records[count - 1].grade_points[j] = 10;
        }
        else if(total >= 85 && total < 90) {
            strncpy(student_records[count - 1].grade[j], "A+", sizeof(student_records[count - 1].grade[j]) - 1);
            student_records[count - 1].grade_points[j] = 9;
        }
        else if(total >= 75 && total < 85) {
            strncpy(student_records[count - 1].grade[j], "A", sizeof(student_records[count - 1].grade[j]) - 1);
            student_records[count - 1].grade_points[j] = 8;
        }
        else if(total >= 65 && total < 75) {
            strncpy(student_records[count - 1].grade[j], "B+", sizeof(student_records[count - 1].grade[j]) - 1);
            student_records[count - 1].grade_points[j] = 7;
        }
        else if(total >= 60 && total < 65) {
            strncpy(student_records[count - 1].grade[j], "B", sizeof(student_records[count - 1].grade[j]) - 1);
            student_records[count - 1].grade_points[j] = 6;
        }
        else if(total >= 55 && total < 60) {
            strncpy(student_records[count - 1].grade[j], "C", sizeof(student_records[count - 1].grade[j]) - 1);
            student_records[count - 1].grade_points[j] = 5;
        }
        else if(total >= 50 && total < 55) {
            strncpy(student_records[count - 1].grade[j], "D", sizeof(student_records[count - 1].grade[j]) - 1);
            student_records[count - 1].grade_points[j] = 4;
        }
        else {
            strncpy(student_records[count - 1].grade[j], "F", sizeof(student_records[count - 1].grade[j]) - 1);
            student_records[count - 1].grade_points[j] = 0;
        }
        student_records[count - 1].grade[j][sizeof(student_records[count - 1].grade[j]) - 1] = '\0';
    }
}

void compute_cgpa() {
    float cgpa = 0.0f;
    for(int i = 0; i < 5; i++) {
        cgpa += (4.0 * student_records[count - 1].grade_points[i]);
    }
    student_records[count - 1].cgpa = ((cgpa)/ 200.0) * 10.0;
}