#rm 0*.o
make comelang2 && sudo make comelang2-install #&& make comelang2-test  && comelang2 -g a.c
#comelang2 -g a.c
#valgrind ./a
#leaks -quiet --atExit -- ./a
#MallocStackLogging=1 leaks -quiet --atExit -- ./a
#valgrind ./HelloWorld2
#valgrind ./comelang2 c.c
