
CC     := gcc
CFLAGS := -O2

default: build/obj/GALA.pb-c.o

# Make subdirectory if it does not exist
make_dir=@mkdir -p $(@D)

# Tangle org file to protobuf specification
GALA.proto: GALA-protobuf-sketch.org
	@mkdir -p build
	emacs --kill --eval '(org-babel-tangle-file "GALA-protobuf-sketch.org")'

# Compile the protobuf specification into C source and header
build/src/GALA.pb-c.c: GALA.proto
	$(make_dir)
	protoc-c --c_out=$(@D) $^
	@mkdir -p build/proto
	mv $^ build/proto/$^

# Compile the C source into an object file 
build/obj/GALA.pb-c.o: build/src/GALA.pb-c.c
	$(make_dir)
	$(CC) $(CFLAGS) -o $@ -c $^
