all: testa_8rainhas.cpp   8rainhas.cpp 8rainhas.hpp 8rainhas.o
	g++ -std=c++11 -Wall 8rainhas.o testa_8rainhas.cpp -o testa_8rainhas
	./testa_8rainhas
	#use comentario se necessario

compile: testa_8rainhas.cpp   8rainhas.cpp 8rainhas.hpp 8rainhas.o
	g++ -std=c++11 -Wall 8rainhas.o testa_8rainhas.cpp -o testa_8rainhas
	
test: testa_8rainhas	
	./testa_8rainhas
	
cpplint: testa_8rainhas.cpp   8rainhas.cpp 8rainhas.hpp
	cpplint   --exclude=catch.hpp  *.*
	
gcov: testa_8rainhas.cpp   8rainhas.cpp 8rainhas.hpp 
	g++ -std=c++11 -Wall -Wall -fprofile-arcs -ftest-coverage -c 8rainhas.cpp
	g++ -std=c++11 -Wall -fprofile-arcs -ftest-coverage 8rainhas.o testa_8rainhas.cpp -o testa_8rainhas
	./testa_8rainhas
	gcov *.cpp	
	
debug: testa_8rainhas.cpp   8rainhas.cpp 8rainhas.hpp 
	g++ -std=c++11 -Wall -Wall -g -c 8rainhas.cpp
	g++ -std=c++11 -Wall  -g 8rainhas.o testa_8rainhas.cpp -o testa_8rainhas
	gdb testa_8rainhas
	
	
cppcheck: testa_8rainhas.cpp   8rainhas.cpp 8rainhas.hpp
	cppcheck  --enable=warning . 

valgrind: testa_8rainhas
	valgrind --leak-check=yes --log-file=valgrind.rpt testa_8rainhas

8rainhas.o : 8rainhas.cpp 8rainhas.hpp
	g++ -std=c++11 -Wall -Wall -c 8rainhas.cpp
	
testa_8rainhas: 	testa_8rainhas.cpp   8rainhas.cpp 8rainhas.hpp 8rainhas.o
	g++ -std=c++11 -Wall 8rainhas.o testa_8rainhas.cpp -o testa_8rainhas

clean:
	rm -rf *.o *.exe *.gc*
	
	
