CMAKE_MINIMUM_REQUIRED(VERSION 3.8)
set(CMAKE_C_STANDARD 99)

PROJECT(CLibmake_Vladislav_Razoronov_Var1 C)

SET(Operation_files blocksort.c bzlib.c compress.c crctable.c decompress.c huffman.c randtable.c)

ADD_EXECUTABLE(LibOperations ${Operation_files})