CC = gcc -Wall -Wextra
INFO_H = record_structure.c
READ_H = input_and_validate.c
COMPUTE_H = computation.c
OP_H = output_feature.c
MAIN = main.c
IP_FILE = students_details.txt
OP_FILE = students_results.txt
OBJS = record_structure.o input_and_validate.o computation.o output_feature.o

all:
		$(CC) -c $(INFO_H)
		$(CC) -c $(READ_H)
		$(CC) -c $(COMPUTE_H)
		$(CC) -c $(OP_H)
		$(CC) -o main $(MAIN) $(OBJS)
		./main $(IP_FILE) $(OP_FILE)
		cat $(OP_FILE)

clean:
		rm $(OBJS) main