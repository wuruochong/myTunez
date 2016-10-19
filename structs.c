#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct song_node{
  char name[256];
  char artist[256];
  struct song_node *next;
} song;

song * insert_front(song *a, char n[], char b[]){
    song * x;
    x = (song *)malloc(sizeof(song));
    // x->name = n;
    strcpy(x->name,n);
    // x->artist = b;
    strcpy(x->artist, b);
    x->next = a;
    return x;
}

song * insert_order(song *a, char n[], char b[]){
    song *x,*copy,*original;
    original = a;
    x = (song *)malloc(sizeof(song));
    // x->name = n;
    strcpy(x->name, n);
    // x->artist = b;
    strcpy(x->artist, b);
    if((strcmp(n,a->name)<0) && (strcmp(b,a->artist)<0)){
        return insert_front(a,n,b);
    }
    while((strcmp(n,a->name)>0) && (strcmp(b,a->artist)>0)){
        if (a->next == 0){
            a->next = x;
            x->next = 0;
            return original;
        }
        copy = a;
        a = a->next;
    }
    copy->next = x;
    x->next = a;
    printf("\n%s - %s - %s\n",copy->name,x->name,a->name);
    printf("\n%s\n",original->name);
    return original;
}

void print_list(song *a){
    printf("Printing list...\n");
    while(a){
        printf("%s-%s\n",a->artist,a->name);
        a = a->next;
    }
}

song * find_song(song *a, char n[]){
    printf("Looking for %s\n",n);
    while ((a->next != 0) && (strcmp(a->name,n) != 0)){
        a = a->next;
    }
    if (a->next = 0){
        printf("Not found...\n");
        return 0;
    }
    printf("Found!\n");
    return a;
}

song * find_song2(song *a, char b[]){
    printf("Looking for %s\n",b);
    while ((a->next != 0) && (strcmp(a->artist,b) != 0)){
        a = a->next;
    }
    if (a->next = 0){
        printf("Not found...\n");
        return 0;
    }
    printf("Found!\n");
    return a;
}

/*song * rand_song(song *a){
}*/

song * remove_song(song *a, char n[]){
    song *copy;
    // while((strcmp(n,a->name)!= 0) && (strcmp(b,a->artist)!= 0)){
    while(strcmp(n,a->name)!= 0){
        if (a->next == 0){
            printf("%s does not exist...\n",n);
            return 0;
        }
        copy = a;
        a = a->next;
    }
    copy->next = a->next;
    free(a);
    return a;
}

song * free_list(song *a){
    song *copy,*original = a;
    while(a){
        copy = a->next;
        free(a);
        a = copy;
    }
    return original;
}
