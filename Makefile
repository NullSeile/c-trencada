CFLAGS=-std=c11 -g -fno-common -Wall -Wno-switch

SRCS=$(wildcard *.c)
OBJS=$(SRCS:.c=.o)

TEST_SRCS=$(wildcard test/*.ç)
TESTS=$(TEST_SRCS:.ç=.exe)

# Stage 1

cç: $(OBJS)
	mkdir -p llib
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS) -lcurl
	$(CC) $(CFLAGS) -fPIC -c ./est/libest.c -o ./llib/libest.a
	$(CC) $(CFLAGS) -fPIC -c ./est/libmates.c -o ./llib/libmates.a

$(OBJS): c_trencada.h

instal·lar: cç
	install -D -m755 cç /usr/bin/cç
	install -D -m644 inclou/est.cç /usr/inclou/est.cç
	install -D -m644 inclou/est_arg.cç /usr/inclou/est_arg.cç
	install -D -m644 inclou/est_atòmic.cç /usr/inclou/est_atòmic.cç
	install -D -m644 inclou/est_bool.cç /usr/inclou/est_bool.cç
	install -D -m644 inclou/est_def.cç /usr/inclou/est_def.cç
	install -D -m644 inclou/est_no_retorna.cç /usr/inclou/est_no_retorna.cç
	install -D -m644 llib/libest.a /usr/llib/libest.a
	install -D -m644 llib/libmates.a /usr/llib/libmates.a

desinstal·lar:
	rm -f /usr/bin/cç
	rm -rf /usr/inclou
	rm -f /usr/llib/libest.a

test/%.exe: cç test/%.ç
	./cç -Iinclou -Itest -c -o test/$*.o test/$*.ç
	$(CC) -pthread -o $@ -L./llib/ -lest test/$*.o -xc test/common

test: $(TESTS)
	for i in $^; do echo $$i; ./$$i || exit 1; echo; done
	test/driver.sh ./cç

# Misc.

neteja:
	rm -rf cç tmp* $(TESTS) test/*.s test/*.exe
	find * -type f '(' -name '*~' -o -name '*.o' ')' -exec rm {} ';'

.PHONY: test neteja test-stage2
