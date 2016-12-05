target = main.o maxheapsort.o minheapsort.o
main: $(target)
	g++ -o main $(target)
main.o: main.cpp maxheapsort.h minheapsort.h
	g++ -c main.cpp
maxheapsort.o: maxheapsort.cpp maxheapsort.h 
	g++ -c maxheapsort.cpp
minheapsort.o: minheapsort.cpp minheapsort.h maxheapsort.h
	g++ -c minheapsort.cpp
clean:
	rm -r main $(target)
