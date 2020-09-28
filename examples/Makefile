CXX	=	gcc
CXXFLAGS	=	-Og
LDLAGS	=	-Og
PRG_NAME	=	Examplemake_Vladislav_Razoronov_Var1
OBJS	=	bzip2.o	bzip2recover.o

all:	$(PRG_NAME)

$(PRG_NAME):	$(OBJS)
	$(CXX)	$(OBJS)	-o	$(PRG_NAME)	$(LDLAGS)

bzip2.o:	bzip2.c
	$(CXX)	-c	bzip2.c	$(CXXFLAGS)

bzip2recover.o:	bzip2recover.c
	$(CXX)	-c	bziprecover.c	$(CXXFLAGS)
