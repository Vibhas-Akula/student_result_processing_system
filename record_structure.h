#ifndef INFO_H
#define INFO_H

typedef struct {
	char id[10];
	char name[30];
	int marks[10];
	int total[5];
	float percent[5];
	char grade[5][5];
	int grade_points[5];
	float cgpa;
}STUDENT;

typedef enum GRADE_INDICES {O, A_PLUS, A, B_PLUS, B, C, D, F} GRADE_INDICES;

extern STUDENT student_records[100];
extern int count;
extern float percentages[100];
extern int grade_counts[8];

#endif
