#include "read_file.h"
#include "LRGrammar.h"

int main(){
    
    file_read fr = read_file("test3");
    printf("grammar\n");
    print_grammar(fr.G);
    printf("table\n");
    print_table(fr.t, fr.G);
    return 0;
}