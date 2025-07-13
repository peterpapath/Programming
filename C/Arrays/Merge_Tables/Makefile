CC=gcc
CFLAGS=-I.


main: merge_tables.o ../utils/utils.o      
	$(CC) -o merge_tables merge_tables.o ../utils/utils.o  


clean:
	rm -f *.o
	rm merge_tables
run:
	./merge_tables 

