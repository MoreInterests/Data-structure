CC = gcc
CFLAGS = -o0 -g -Wall 

SRC=hash.c test.c
OBJS=test

$(OBJS):$(SRC)
	$(CC) $(CFLAGS) -o $@ $^

.PHONY:clean
clean:
	rm -rf $(OBJS)
