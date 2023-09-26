rm *.c.o
make comelang2-sh

#clang -o 05function2.c.o -c 05function2.c.c
#	comelang2 -o comelang2-sh 01main.c.o 02transpile.c.o 03transpile2.c.o 04heap.c.o 05function.c.o 05function2.c.o 05function3.c.o 05function4.c.o 06str.c.o 07var.c.o 08if.c.o 09while.c.o 10do_while.c.o 11for.c.o 12switch.c.o 13op.c.o 14struct.c.o 15union.c.o 16enum.c.o 17typedef.c.o 18field.c.o 19eq.c.o 20method.c.o 21obj.c.o 22impl.c.o 23interface.c.o
#mkdir -p /usr/local/bin
#install -m 755 ./comelang2-sh /usr/local/bin
#mkdir -p /usr/local/include
#install -m 644 ./comelang2.h /usr/local/include
