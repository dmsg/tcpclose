CC=clang
RM=rm

OBJS=main.o tcpclose.o

all:tcpclose

tcpclose: $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $<

.PHONY: clean
clean:
	rm -rf $(OBJS) tcpclose

%.o.%.c:
	$(CC) -c $< -o $@
