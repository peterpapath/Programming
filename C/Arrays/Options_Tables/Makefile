CC=gcc
CFLAGS=-I.


main: options_tables.o ../utils/utils.o      
	$(CC) -o options_tables options_tables.o ../utils/utils.o  


clean:
	rm -f *.o
	rm options_tables
run:
	./options_tables 

