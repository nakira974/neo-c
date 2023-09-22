#rm 0*.o 1*.o 2*.o
make comelang2
sudo make comelang2-install
#make comelang2-test
#make comelang2-self-host
#comelang2 -g -s a.c
#valgrind ./a
#comelang2 -g a.c
#comelang2 -g a.c
#comelang2 -g -s a.c
#valgrind ./a
#leaks -quiet --atExit -- ./a
#MallocStackLogging=1 leaks -quiet --atExit -- ./a
#valgrind ./HelloWorld2
#valgrind ./comelang2 c.c
