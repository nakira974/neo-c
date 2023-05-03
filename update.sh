#!/bin/bash

rm -rf build

if [ -e vin/Makefile ]
then
    (cd vin && make distclean)
fi

if [ -e yappy/Makefile ]
then
    (cd yappy && make distclean)
fi

if [ -e zed/Makefile ]
then
    (cd zed && make distclean)
fi

if [ -e zed2/Makefile ]
then
    (cd zed2 && make distclean)
fi

if [ -e shsh/Makefile ]
then
    (cd shsh && make distclean)
fi

if [ -e mf/Makefile ]
then
    (cd mf && make distclean)
fi

if [ -e gogo/Makefile ]
then
    (cd gogo && make distclean)
fi

(cd lcc && make clean)
(cd uARM && make clean)

if [ -e tcc/Makefile ]
then
    (cd tcc && make clean)
fi

if [ -e ego/Makefile ]
then
    (cd ego && make clean)
fi

(cd 9cc && make clean)
(cd uARM && make clean)
(cd c && make clean)
(cd lcc && make clean)


if [ -e Makefile ]
then
    make distclean
fi

if [ ! -e Makefile ]
then
    git add .
    git commit 
    git remote add origin https://github.com/ab25cq/comelang
    git push -f -u origin master
fi

echo shsh
(cd shsh && rm -rf .git && git init && bash update.sh)

echo mf
(cd mf && rm -rf .git && git init && bash update.sh)

echo vin
(cd vin && rm -rf .git && git init && bash update.sh)

echo zed
(cd zed && rm -rf .git && git init && bash update.sh)

echo zed2
(cd zed2 && rm -rf .git && git init && bash update.sh)


