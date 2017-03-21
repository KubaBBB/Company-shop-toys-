all: program

program: plik.o stala.o zlecenie.o handel.o main.o 
			g++ plik.o stala.o zlecenie.o handel.o main.o  -o program

plik.o:  plik.cpp plik.h 
			g++ -c -Wall plik.cpp

stala.o: stala.cpp stala.h plik.h
			g++ -c -Wall stala.cpp

zlecenie.o: zlecenie.cpp zlecenie.h plik.h
			g++ -c -Wall zlecenie.cpp

handel.o: handel.cpp handel.h
			g++ -c -Wall handel.cpp 




program.o: main.cpp
			g++ -c -Wall main.cpp

clean: 
	rm -rf *o prog
