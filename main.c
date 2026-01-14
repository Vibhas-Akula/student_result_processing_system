#include <stdio.h>
#include <stdlib.h>
#include "input_and_validate.h"
#include "computation.h"
#include "output_feature.h"

int main(int argc, char **argv) {
    if(argc != 3) {
        printf("Missing Arguments!\n");
        return 1;
    }
    FILE *input_file;
    char buffer[100];
    input_file = fopen(argv[1], "r");
    if(!input_file) {
        printf("FileError: %s file not found!\n", argv[1]);
        return 1;
    }
    while(fgets(buffer, sizeof(buffer), input_file) != NULL) {
        char id[10];
        char name[30];
        int marks[10];
        if(sscanf(buffer, "%s %s %d %d %d %d %d %d %d %d %d %d", id, name, &marks[0], &marks[1], &marks[2], &marks[3], &marks[4], &marks[5], &marks[6], &marks[7], &marks[8], &marks[9]) == 12) {
            validate_id(id);
            validate_name(name);
            validate_marks(marks);
            read_details(id, name, marks);
        }
        else {
            printf("INCOMPLETE STUDENT DETAILS!\n");
            return 1;
        }
        compute_percentages();
        compute_grades();
        compute_cgpa();
    }
    fclose(input_file);
    display_report(argv[2]);
    return 0;
}