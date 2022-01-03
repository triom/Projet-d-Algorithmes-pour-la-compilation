gcc main.c -o main.o -c
gcc read_file.c -o read_file.o -c
gcc LRGrammar.c -o LRGrammar.o -c 
gcc -o prog main.o read_file.o LRGrammar.o 