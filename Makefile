main: main.o funcs.o caesar.o decrypt.o viginere.o
	g++ -o main main.o funcs.o caesar.o decrypt.o viginere.o

tests: tests.o caesar.o decrypt.o viginere.o
	g++ -o tests tests.o funcs.o caesar.o decrypt.o viginere.o

funcs.o: funcs.cpp funcs.h

main.o: main.cpp funcs.h

tests.o: tests.cpp  doctest.h

caesar.o: caesar.cpp caesar.h

decrypt.o: decrypt.cpp decrypt.h

viginere.o: viginere.cpp viginere.h

add: 
	git add caesar.cpp caesar.h decrypt.cpp decrypt.h doctest.h funcs.cpp funcs.h main.cpp Makefile README.org tests.cpp viginere.cpp viginere.h

clean:
	rm -f main.o tests.o funcs.o caesar.o decrypt.o viginere.o main tests

help:
	@echo  make main : make executable named main
	@echo make tests : make test suite named tests

