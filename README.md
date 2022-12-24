# IBT-project
This is a joint project of Embedded Sytems class and Advanced Operating Systems in partnership with IBT Systems.

## Howto Protobuff-c

Use the `protoc` command to generate `.pb-c.c` and `.pb-c.h` output files from your `.proto` input file. The `--c_out` options instructs `protoc` to use the protobuf-c plugin.

    protoc --c_out=. example.proto

Include the `.pb-c.h` file from your C source code.

    #include "example.pb-c.h"

Compile your C source code together with the `.pb-c.c` file. Add the output of the following command to your compile flags.

    pkg-config --cflags 'libprotobuf-c >= 1.0.0'

Link against the `libprotobuf-c` support library. Add the output of the following command to your link flags.

    pkg-config --libs 'libprotobuf-c >= 1.0.0'

If using autotools, the `PKG_CHECK_MODULES` macro can be used to detect the presence of `libprotobuf-c`. Add the following line to your `configure.ac` file:

    PKG_CHECK_MODULES([PROTOBUF_C], [libprotobuf-c >= 1.0.0])

This will place compiler flags in the `PROTOBUF_C_CFLAGS` variable and linker flags in the `PROTOBUF_C_LDFLAGS` variable. Read [more information here](https://autotools.io/pkgconfig/pkg_check_modules.html) about the `PKG_CHECK_MODULES` macro.

## Compling

After adding to include paths protobuf-c

	gcc receiveMessage.c -o bin/receiveMessage -lprotobuf-c
	gcc sendMessage.c -o bin/sendMessage -lprotobuf-c 