all:
	gcc -O0 -g -Wall module_a.c module_b.c main.c -o loader

clean:
	rm -rf *.o *~ loader *.a
