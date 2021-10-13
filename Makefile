main: main.o caesar.o vigenere.o decrypt.o
	g++ -std=c++17 -o main main.o caesar.o vigenere.o decrypt.o

tests: tests.o caesar.o vigenere.o decrypt.o
	g++ -std=c++11 -o tests tests.o caesar.o vigenere.o decrypt.o

test-ascii: test-ascii.o
		g++ -o test-ascii test-ascii.o

decrypt.o: decrypt.cpp decrypt.h
	g++ -c decrypt.cpp
vigenere.o: vigenere.cpp vigenere.h caesar.h
	g++ -std=c++17 -c vigenere.cpp
test-ascii.o: test-ascii.cpp
		g++ -c test-ascii.cpp
caesar.o: caesar.cpp caesar.h
	g++ -std=c++17 -c caesar.cpp
main.o: main.cpp caesar.h vigenere.h decrypt.h
	g++ -std=c++17 -c main.cpp
tests.o: tests.cpp doctest.h caesar.h vigenere.h decrypt.h
	g++ -std=c++11 -c tests.cpp
clean:
	rm -f main.o caesar.o tests.o test-ascii.o vigenere.o decrypt.o
