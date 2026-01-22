#include <stdio.h>
#include <stdlib.h>
#include "record_structure.h"
#include "output_feature.h"

void display_report(char* output_file) {
    FILE *fp = fopen(output_file, "w");
    char* grades[] = {"O", "A+", "A", "B+", "B", "C", "D", "F"};
    fprintf(fp, "%-83s%s%84s\n\n", "", "STUDENT-RESULTS", "");
    fprintf(fp, "%-10s %-15s", "ID", "NAME");
    for(int i = 1; i <= 5; i++) {
        fprintf(fp, "%10s%s%d%-10s", "", "SUBJECT-", i, "");
    }
    fprintf(fp, " %6s%-4s\n", "", "CGPA");
    fprintf(fp, "%-10s %-15s", "", "");
    for(int i = 0; i < 5; i++) {
        fprintf(fp, "%-6s %-6s %-6s %-6s %-2s", "MINOR", "MAJOR", "TOTAL", "GRADE", "");
    }
    fprintf(fp, "\n");
    for(int i = 0; i < count; i++) {
        fprintf(fp, "%-10s %-15s", student_records[i].id, student_records[i].name);
        for(int j = 0; j < 10; j += 2) {
            int k = (j + 1) / 2;
            fprintf(fp, "%-6d %-6d %-6d %-6s %-2s", student_records[i].marks[j], student_records[i].marks[j + 1], student_records[i].total[k], student_records[i].grade[k], "");
        }
        fprintf(fp, "%-2s%-4.2f\n", "", student_records[i].cgpa);
    }
    fprintf(fp, "\nSTATISTICS\n");
    fprintf(fp, "%-25s %.2f%%\n", "CLASS-AVERAGE-PERCENTAGE:", class_average());
    fprintf(fp, "%-25s %.2f%%\n", "LOWEST-PERCENTAGE:", lowest_percentage());
    fprintf(fp, "%-25s %.2f%%\n", "HIGHEST-PERCENTAGE:", highest_percentage());
    fprintf(fp, "\nGRADE-CATEGORY-COUNTS\n");
    grade_category_counts();
    for(int i = 1; i <= 5; i++) {
        fprintf(fp, "%4s%s%d%-2s", "", "SUBJECT-", i, "");
    }
    fprintf(fp, "\n");
    for(int i = 0; i < 8; i++) {
        fprintf(fp, "%-2s: ", grades[i]);
        for(int j = 0; j < 5; j++) {
            fprintf(fp, "%s%d%-14s", "", grade_counts[i][j], "");
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
}