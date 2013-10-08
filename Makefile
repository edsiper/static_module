all:
	gcc -g -Wall module_a.c -c
	gcc -g -Wall main.c -c
	ar rc module_a.a module_a.o
	ar r main.a main.o
	gcc -g -Wall  module_a.c main.c -o loader

clean:
	rm -rf *.o *~ loader *.a
