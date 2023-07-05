#rm 0*.o
make comelang2
sudo make comelang2-install
make comelang2-test
valgrind ./HelloWorld2
#valgrind ./comelang2 c.c
