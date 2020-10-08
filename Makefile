main: main.o funcs.o caesar.o vigenere.o decrypt.o
	g++ -o main main.o funcs.o caesar.o vigenere.o decrypt.o

tests: tests.o caesar.o vigenere.o decrypt.o
	g++ -o tests tests.o caesar.o vigenere.o decrypt.o

run_main: main
	make clean
	make main
	./main

run_tests: tests
	make clean
	make tests
	./tests
	
funcs.o: funcs.cpp funcs.h

main.o: main.cpp funcs.h

tests.o: tests.cpp doctest.h

caesar.o: caesar.cpp caesar.h

vigenere.o: vigenere.cpp vigenere.h

decrypt.o: decrypt.cpp decrypt.h

add: 
	git add caesar.cpp caesar.h decrypt.cpp decrypt.h doctest.h funcs.cpp funcs.h main.cpp Makefile README.org tests.cpp vigenere.cpp vigenere.h

clean:
	rm -f main.o tests.o funcs.o caesar.o decrypt.o vigenere.o main tests

help:
	@echo  make main : make executable named main
	@echo make tests : make test suite named tests

