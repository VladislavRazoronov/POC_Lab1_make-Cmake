CXX	=	gcc
CXXFLAGS	=	-Og
LDLAGS	=	-Og
PRG_NAME	=	Libmake_Vladislav_Razoronov_Var1
OBJS	=	blocksort.o	bzlib.o	compress.o	crctable.o	decompress.o	huffman.o	randtable.o

all:	$(PRG_NAME)

$(PRG_NAME):	$(OBJS)
	$(CXX)	$(OBJS)	-o	$(PRG_NAME)	$(LDLAGS)

blocksort.o:	blocksort.c	bzlib.h	bzlib_private.h
	$(CXX)	-c	blocksort.c	$(CXXFLAGS)

bzlib.o:	bzlib.c	bzlib.h	bzlib_private.h
	$(CXX)	-c	bzlib.c	$(CXXFLAGS)

compress.o:	compress.c	bzlib.h	bzlib_private.h
	$(CXX)	-c	compress.c	$(CXXFLAGS)

crctable.o:	crctable.c	bzlib.h	bzlib_private.h
	$(CXX)	-c	crctable.c	$(CXXFLAGS)

decompress.o:	decompress.c	bzlib.h	bzlib_private.h
	$(CXX)	-c	decompress.c	$(CXXFLAGS)

huffman.o:	huffman.c	bzlib.h	bzlib_private.h
	$(CXX)	-c	huffman.c	$(CXXFLAGS)

randtable.o:	randtable.c	bzlib.h	bzlib_private.h
	$(CXX)	-c	randtable.c	$(CXXFLAGS)

crctable.o:	crctable.c	bzlib.h	bzlib_private.h
	$(CXX)	-c	crctable.c	$(CXXFLAGS)

.PHONY	:	clean
clean:
	rm	-rf	*.o	$(PRG_NAME)