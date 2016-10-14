typedef struct song_node{
  char name[256];
  char artist[256];
  struct song_node *prev;
  struct song_node *next;
} song;

song * insert_front(song *a, char n[], char b[]);

song * insert_order(song *a, char n[], char b[]);

void print_list(song *a);

song * find_song(song *a, char n[]);

song * find_song2(song *a, char b[]);

song * rand_song(song *a);

void remove_song(song *a, char n[]);

song * free_list(song *a);
