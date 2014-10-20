all: clean readMsg writeMsg

readMsg: stego.c readMsg.c
	$(CC) -o ReadMsg stego.c ReadMsg.c

writeMsg: stego.c writeMsg.c
	$(CC) -o writeMsg stego.c writeMsg.c

clean:
	rm -f readMsg writeMsg
