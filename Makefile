all: main test
	gcc -o StrFunctions StrFunctions.o test.o
main:
	gcc -c StrFunctions.c
test:
	gcc -c test.c 
clean:
	rm StrFunctions
run: all
	./StrFunctions
