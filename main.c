#include <stdio.h>
#include <stdlib.h>
#include "func.h"
#include "structs.h"
#include <time.h>

int main(){
  printf("Testing add\n");
  add_song("abc","def");
  add_song("zxc","def");
  add_song("aac","def");
  add_song("aaa","dzf");
  add_song("lol","ded");

  add_song("asd","bach");

  add_song("ayy","zzz");
  print_all();

  printf("\nTesting find\n");
  printf("finding abc\n");
  // printf("%s",find_song(table[25],"ayy")->name);
  printf("\n%s\n", search_song("abc")->name);
  printf("finding xyz\n");
  search_song("xyz");

  printf("\nTesting find2\n");
  printf("finding def\n");
  printf("%s\n", search_song2("def")->artist);
  printf("finding fed\n");
  search_song2("fed");

  printf("\nTesting printletter\n");
  printf("printing d library\n");
  print_ent('d');
  printf("printing y library\n");
  print_ent('y');
  

  printf("\nTesting printartist\n");
  printf("printing def songs\n");
  print_art("def");
  printf("printing fed songs\n");
  print_art("fed");

/*  printf("\nTesting random song...\n");
  printf("%s\n",rand_song(table[3])->name);
  printf("\n");
  */

   printf("\nTesting shuffle\n");
   shuffle(1);

  printf("\nTesting delete\n");
  print_all();
  printf("\ndeleting def-aac\n");
  del_song("aac","def");
  print_all();


  return 0;
}



/*int main(){
    printf("Adding a - aa...\n");
    song * a = insert_front(0,"aa","a");
    printf("Adding b - cc...\n");
    a = insert_order(a, "cc", "b");
    printf("Adding b - ac...\n");
    a = insert_order(a,"ac","b");
    printf("Adding b - bb...\n");
    a = insert_order(a, "bb", "b");
    printf("Adding a - zz...\n");
    a = insert_order(a, "zz", "a");
    print_list(a);
    printf("length: %d\n", list_len(a));
    printf("\n");

    find_song(a, "zz");
    find_song(a, "aa");
    printf("\n");

    find_song2(a, "d");
    find_song2(a, "a");
    find_song2(a, "b");
    printf("\n");

    printf("Testing random song...\n");
    printf("%s\n",rand_song(a)->name);
    printf("\n");

    printf("Removing song aa...\n");
    a = remove_song(a, "aa");
    print_list(a);
    printf("length: %d\n", list_len(a));
    printf("Removing song cc...\n");
    a = remove_song(a, "cc");
    print_list(a);
    printf("length: %d\n", list_len(a));
    printf("Removing song bb...\n");
    a = remove_song(a, "bb");
    print_list(a);
    printf("length: %d\n", list_len(a));
    printf("\n");

    printf("Freeing...\n");
    free_list(a);
    printf("Successfully freed");
    printf("\n");

    return 0;
}
*/
