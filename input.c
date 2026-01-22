#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "record_structure.h"

void input(char* id, char* name, int* marks) {
	strncpy(student_records[count].id, id, sizeof(student_records[count].id) - 1);
    student_records[count].id[sizeof(student_records[count].id) - 1] = '\0';
    strncpy(student_records[count].name, name, sizeof(student_records[count].name) - 1);
    student_records[count].name[sizeof(student_records[count].name) - 1] = '\0';
    for(int i = 0; i < 10; i++) {
        student_records[count].marks[i] = marks[i];
    }
    count++;
}