output: main.o hello.o welcom.o
	g++ main.o hello.o welcom.o -o output

main.o: main.c
	g++ -c main.c

hello.o: hello.c
	g++ -c hello.c

welcom.o: welcom.c
	g++ -c welcom.c

clean:
	rm *.o output