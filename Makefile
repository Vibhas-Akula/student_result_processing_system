CC = gcc -Wall -Wextra
INFO_H = record_structure.c
VALID_H = validation.c
IP_H = input.c
COMPUTE_H = computation.c
OP_H = output_feature.c
REPORT_H = display_report.c
MAIN = main.c
IP_FILE = students_details.txt
OP_FILE = students_results.txt
OBJS = record_structure.o input.o validation.o computation.o output_feature.o display_report.o

all:
		$(CC) -c $(INFO_H)
		$(CC) -c $(VALID_H)
		$(CC) -c $(IP_H)
		$(CC) -c $(COMPUTE_H)
		$(CC) -c $(OP_H)
		$(CC) -c $(REPORT_H)
		$(CC) -o main $(MAIN) $(OBJS)
		./main $(IP_FILE) $(OP_FILE)

clean:
		rm $(OBJS) main