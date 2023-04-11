output: scond.o third.o
	g++ second.o third.o -o output

second.o: second.c
	g++ -c second.c

third.o: third.c
	g++ -c third.c

clean:
	rm *.o output