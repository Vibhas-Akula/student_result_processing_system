#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "record_structure.h"

void read_details(char* id, char* name, int* marks) {
	strncpy(student_records[count].id, id, sizeof(student_records[count].id) - 1);
    student_records[count].id[sizeof(student_records[count].id) - 1] = '\0';
    strncpy(student_records[count].name, name, sizeof(student_records[count].name) - 1);
    student_records[count].name[sizeof(student_records[count].name) - 1] = '\0';
    for(int i = 0; i < 10; i++) {
        student_records[count].marks[i] = marks[i];
    }
    count++;
}

int validate_id(char* id) {
    for(int i = 0; id[i] != '\0'; i++) {
        if(!isalnum((unsigned char)id[i])) {
            printf("INVALID ID: %s\n", id);
            return 0;
        }
        for(int j = 0; j < count; j++) {
            if(!strcmp(id, student_records[j].id)) {
                printf("DUPLICATE ENTRY: %s\n", id);
                return 0;
            }
        }
    }
    return 1;
}

int validate_name(char* name) {
    for(int i = 0; name[i] != '\0'; i++) {
        if(!isalpha((unsigned char)name[i])) {
            printf("INVALID NAME: %s\n", name);
            return 0;
        }
    }
    return 1;
}

int validate_marks(int* marks) {
    for(int i = 0; i < 10; i += 2) {
        if(marks[i] > 40 || marks[i] < 0) {
            printf("MINOR MARKS OUT OF RANGE: %d\n", marks[i]);
            return i;
        }
        else if(marks[i + 1] > 60 || marks[i + 1] < 0) {
            printf("MAJOR MARKS OUT OF RANGE: %d\n", marks[i + 1]);
            return i;
        }
    }
    return -1;
}
