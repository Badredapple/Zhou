compiler by g++ in C++11
:   g++ -g -Wall -std=C++11 aim.cc 

:   gcc -g -Wall -std=C++11 aim.cc -lstd 

compiler by gcc in C++11

1. gcc -c -std=c++11 aim.cc     
2. gcc aim.o -o aim -lstdc++ 
3. ./aim  

If you use clang complie cc use 
:
clang++ -Wall -g -std=c++11 -lstdc++  xxx.cc -o xxx
