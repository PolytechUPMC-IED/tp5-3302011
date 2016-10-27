CC=gcc
CFLAGS= -O3 -Wall -funroll-loops
LDLIBS= pbm2eps9.c printer.c
OBJS_LIB= ${LDLIBS:.c=.o}

all: pbm2eps9 pmb2eps9

pbm2png: pbm2png.c
	${CC} ${CFLAGS} -s -o $@ $< -lpng

pbm2eps9: ${OBJS_LIB}
	${CC} -s -o $@ ${OBJS_LIB}

pbm2eps9.o:pbm2eps9.c 
	${CC} ${CFLAGS} -c -o $@ $<

pbm2eps9.o: printer.h 

printer.o: printer.c

%.o: %.c 
	${CC} ${CFLAGS} -c $<

clean: 
	-rm -f ${OBJS_LIB} pbm2png pbm2eps9

.PHONY: clean
