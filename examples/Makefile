CC	?=	gcc
CCFLAGS	?=	-O3
LDLAGS	?=	-O3
EXT	?=	a
BIN_DIR = bin
OBJ_DIR = obj
PRG_NAME	=	Example_Vladislav_Razoronov_Var1
OBJS	=	bzip2.o	bzip2recover.o
LDFLAGS	=	-L.	-loperations_Vladislav_Razoronov_Var1

all:	$(BIN_DIR)/$(PRG_NAME)

$(BIN_DIR)/$(PRG_NAME):	$(OBJS).$(EXT)
	$(CC)	$(OBJS)	-o	$(PRG_NAME).$(EXT)	$(LDLAGS)

$(OBJ_DIR)/bzip2.o:	bzip2.c
	$(CC)	-c	bzip2.c	$(CCFLAGS)

$(OBJ_DIR)/bzip2recover.o:	bzip2recover.c
	$(CC)	-c	bziprecover.c	$(CCFLAGS)

.PHONY:	clean
	rm	-rf	$(OBJ_DIR)/*.o	$(OBJ_DIR)/*.d	$(BIN_DIR)/$(PRG_NAME).$(EXT)