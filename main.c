#include <stdio.h>
#include <stdlib.h>
//#include "func.h"
#include "structs.h"




int main(){
    printf("Adding a - aa...\n");
    song * a = insert_front(0,"aa","a");
    printf("Adding b - cc...\n");
    a = insert_order(a, "cc", "b");
    printf("Adding b - ac...\n");
    a = insert_order(a,"ac","b");
    printf("Adding a - bb...\n");
    a = insert_order(a, "bb", "a");
    printf("Adding a - ab...\n");
    a = insert_order(a, "ab", "a");
    print_list(a);
    printf("\n");
    
    find_song(a, "zz");
    find_song(a, "aa");
    printf("\n");
    
    find_song2(a, "d");
    find_song2(a, "a");
    find_song2(a, "b");
    printf("\n");
    
    printf("Removing song aa...\n");
    a = remove_song(a, "aa");
    print_list(a);
    printf("Removing song cc...\n");
    a = remove_song(a, "cc");
    print_list(a);
    printf("Removing song bb...\n");
    a = remove_song(a, "bb");
    print_list(a);
    printf("\n");
    
    printf("Freeing...\n");
    free_list(a);
    printf("Successfully freed");
    printf("\n");
    
    return 0;
}
