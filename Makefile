CC=clang
CFLAGS=-Wall -O2 #-g

FRAMEWORKS=-framework Foundation

TARGETS=classdump-dyld

all: ${TARGETS}

main.o: main.m CommonDefines.m CommonFunctions.m ParsingFunctions.m

classdump-dyld: main.o
	${CC} -o $@ $< ${FRAMEWORKS} ${LIBS}

clean:
	rm -rf ${TARGETS} *.o
