CC = gcc
CFLAGS =  -g -Wall

test:test.o linkstack.o
	$(CC) $(CFLAGS) -o $@ $^

.PHONY:clean
clean:
	rm  test *.o
