#include "structs.h"
song *table[26];

song * add_song(char n[], char b[]);

song * search_song(char n[]);

song * search_song2(char b[]);

void print_ent(char a);

void print_art(char b[]);

void print_all();

void shuffle(int n);

void del_song(char a[], char b[]);

void del_all();
