#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "record_structure.h"

float class_average() {
    float class_percentage = 0.0f;
    for(int i = 0; i < count; i++) {
        for(int j = 0; j < 5; j++) {
            percentages[i] += student_records[i].percent[j];
        }
        percentages[i] = (percentages[i]) / 5;
        class_percentage += percentages[i];
    }
    return (class_percentage) / count;
}

float lowest_percentage() {
    float percent = 1E5f;
    for(int i = 0; i < count; i++) {
        if(percent > percentages[i]) {
            percent = percentages[i];
        }
    }
    return percent;
}

float highest_percentage() {
    float percent = -1E5f;
    for(int i = 0; i < count; i++) {
        if(percent < percentages[i]) {
            percent = percentages[i];
        }
    }
    return percent;
}

void grade_category_counts() {
    for(int i = 0; i < count; i++) {
        for(int j = 0; j < 5; j++) {
            if(!strcmp(student_records[i].grade[j], "O")) {
                grade_counts[O][j]++;
            }
            else if(!strcmp(student_records[i].grade[j], "A+")) {
                grade_counts[A_PLUS][j]++;
            }
            else if(!strcmp(student_records[i].grade[j], "A")) {
                grade_counts[A][j]++;
            }
            else if(!strcmp(student_records[i].grade[j], "B+")) {
                grade_counts[B_PLUS][j]++;
            }
            else if(!strcmp(student_records[i].grade[j], "B")) {
                grade_counts[B][j]++;
            }
            else if(!strcmp(student_records[i].grade[j], "C")) {
                grade_counts[C][j]++;
            }
            else if(!strcmp(student_records[i].grade[j], "D")) {
                grade_counts[D][j]++;
            }
            else {
                grade_counts[F][j]++;
            }
        }
    }
}