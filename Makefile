all:
	gcc -g -Wall  module_a.c main.c -o loader

clean:
	rm -rf *.o *~ loader *.a
