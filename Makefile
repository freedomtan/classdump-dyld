CC=clang
CFLAGS=-Wall -O2 #-g

FRAMEWORKS=-framework Foundation

TARGETS=classdump-dyld classdump-dyld_x86_64 classdump-dyld_arm64e

all: ${TARGETS}

classdump-dyld_x86_64: main.m CommonDefines.m CommonFunctions.m ParsingFunctions.m
	${CC} -o $@ $< ${FRAMEWORKS} ${LIBS} -target x86_64-apple-macos11

classdump-dyld_arm64e: main.m CommonDefines.m CommonFunctions.m ParsingFunctions.m
	${CC} -o $@ $< ${FRAMEWORKS} ${LIBS} -target arm64e-apple-macos11

classdump-dyld: classdump-dyld_x86_64 classdump-dyld_arm64e
	lipo -create -output classdump-dyld classdump-dyld_x86_64 classdump-dyld_arm64e

clean:
	rm -rf ${TARGETS} *.o
