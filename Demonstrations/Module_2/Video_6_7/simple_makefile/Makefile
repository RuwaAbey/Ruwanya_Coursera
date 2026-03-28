#This is a comment 

#This includes another file
include sources.mk

#Variable & Line Continuance
FLAGS = -g \
	-Wall \
	-std=c99

#my_file.o target binary
my_file.o: my_file.h my_file.c
	gcc $(FLAGS) -c -o my_file.o my_file.c

#main.o target binary
main.o: my_file.h
	gcc $(_FLAGS) -c -o main.o main.c

#my_memory.o target binary
my_memory.o : my_memory.h my_memory.c
	gcc $(FLAGS) -c -o my_memory.o my_memory.c


#Main Target Executable
main.out: main.o my_file.o my_memory.o
	gcc -o main.out main.o my_file.o my_memory.o