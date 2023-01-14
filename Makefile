CC     := gcc
CFLAGS := -lprotobuf-c

default: gala.pb-c.c bin/sendMessage-tb
test-send: gala.pb-c.c bin/sendMessage-tb run-test
test-TXRX: gala.pb-c.c bin/sendMessage-tb bin/receiveMessage run-TXRX

# Make subdirectory if it does not exist
make_dir=@mkdir -p $(@D)

# Compile the protobuf into C source and header
gala.pb-c.c: gala.proto
	$(make_dir)
	protoc-c --c_out=$(@D) $^

# Compile the C source 
bin/sendMessage-tb: sendMessage-tb.c
	$(make_dir)
	$(CC) $^ -o $@ $(CFLAGS)

bin/receiveMessage: receiveMessage.c
	$(make_dir)
	$(CC) $^ -o $@ $(CFLAGS)

run-test:
	bin/sendMessage-tb n 1000

run-TXRX:
	bin/sendMessage-tb f 1
	cp bin/message0.txt bin/message.txt 
	bin/receiveMessage
