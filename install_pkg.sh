
# alpine linux
if uname -v | grep iSH
then
    apk add sudo git clang gcc pcre-dev readline-dev ncurses-dev make autoconf valgrind gdb musl-dev
elif uname | grep Darwin
then
    brew install git pcre readline ncurses make autoconf 
elif which apk > /dev/null
then
    sudo apk add sudo git clang gcc pcre-dev readline-dev ncurses-dev make samurai autoconf valgrind gdb lldb musl-dev
# termux
elif test `uname -o` = Android
then
    apt install which clang pcre readline ncurses make autoconf valgrind gdb lldb binutils libandroid-glob
# debian
elif ls /etc/debian_version
then
    sudo apt install  clang gcc libpcre3-dev libreadline-dev ncurses-dev make autoconf valgrind gdb lldb
elif which apt > /dev/null
then
    sudo apt install  clang gcc libpcre++-dev libreadline-dev ncurses-dev make autoconf valgrind gdb lldb
fi
