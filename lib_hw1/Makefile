all: a.o list.o hash.o bitmap.o
	gcc -o testlib a.o list.o hash.o bitmap.o 
a.o: a.c
	gcc -c a.c
list.o: list.c
	gcc -c list.c
hash.o: hash.c
	gcc -c hash.c
bitmap.o: bitmap.c
	gcc -c bitmap.c
clean:
	rm *.o
	rm testlib
