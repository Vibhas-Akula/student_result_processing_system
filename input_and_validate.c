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

void validate_id(char* id) {
    for(int i = 0; id[i] != '\0'; i++) {
        if(!isalnum((unsigned char)id[i])) {
            printf("INVALID ID: %s\n", id);
            exit(1);
        }
        for(int j = 0; j < count; j++) {
            if(!strcmp(id, student_records[j].id)) {
                printf("DUPLICATE ENTRY: %s\n", id);
                exit(1);
            }
        }
    }
}

void validate_name(char* name) {
    for(int i = 0; name[i] != '\0'; i++) {
        if(!isalpha((unsigned char)name[i])) {
            printf("INVALID NAME: %s\n", name);
            exit(1);
        }
    }
}

void validate_marks(int* marks) {
    for(int i = 0; i < 10; i += 2) {
        if(marks[i] > 40) {
            printf("MINOR MARKS OUT OF RANGE: %d\n", marks[i]);
            exit(1);
        }
        else if(marks[i + 1] > 60) {
            printf("MAJOR MARKS OUT OF RANGE: %d\n", marks[i + 1]);
            exit(1);
        }
    }
}
