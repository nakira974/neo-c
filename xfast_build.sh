bash install_pkg.sh

bash fast_build.sh && if uname -a | grep Linux | egrep -v 'aarch64|rasp'; then echo 9cc && cd 9cc && make clean && make && make test && cd ..;  fi; echo vin && cd vin && bash fast_build.sh && cd .. && echo zed && cd zed && bash fast_build.sh && cd .. && echo shsh && cd shsh && bash fast_build.sh && cd .. && echo mf && cd mf && bash fast_build.sh && cd .. && cd yappy && bash fast_build.sh && cd .. && if uname -a | grep -v Darwin; then echo gogo && cd gogo && bash fast_build.sh && cd .. && echo yappy && cd yappy && bash fast_build.sh && cd ..; fi && if uname -a | grep Linux | egrep -v 'aarch64|rasp' && hostname | grep -v comelang; then echo tcc && cd tcc && make clean && make CC=comelang && cd ..; fi

