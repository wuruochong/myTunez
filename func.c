#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "structs.h"

song * add_song(char n[], char b[]){
  int i = b[0]-97;
  return insert_order(table[i],n, b);
}

song * search_song(char n[]){
  song * res;
  int c = 26;
  while (c){
    res = find_song(table[c],n);
    if (res){
      return res;
    }
  }
  return 0;
}

song * search_song2(char b[]){
  int i = b[0]-97;
  return find_song2(table[i],b);
}

void print_ent(char a){
  int i = a - 97;
  print_list(table[i]);
}

void print_art(char b[]){
  song * t = search_song2(b);
  printf("all songs of %s:\n",b);
  while (strcmp(t->artist, b)==0){
    printf("%s-%s",t->artist,t->name);
    t = t->next;
  }
}

void print_all{
  int c =0;
  while (c!=26){
    print_ent (c);
    c++;
  }
}
