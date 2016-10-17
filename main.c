#include <stdio.h>
#include <stdlib.h>
#include "func.h"
#include "structs.h"

song * insert_front(song *a, char n[], char b[]){
  song * x;
  x = (song *)malloc(sizeof(song));
  x->name = n;
  x->artist = b;
  x->next = a;
  return x;
}

song * insert_order(song *a, char n[], char b[]){
  song *x;
  x = (song *)malloc(sizeof(song));
  x->name = n;
  x->artist = b;
  while((strcmp(n,(a->next)->name)>0) && (strcmp(b,(a->next)->artist)>0)){
    if (a->next == 0){
      a->next = x;
      x->next = 0;
      return x;
    }
    a = a->next;
  }
  x->next = a;
}
