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
    strcpy(x->name,n);
    strcpy(x->artist, b);
    x->next = a;
    return x;
}

song * insert_order(song *a, char n[], char b[]){
    song *x,*copy,*original;
    original = a;
    x = (song *)malloc(sizeof(song));
    strcpy(x->name, n);
    strcpy(x->artist, b);
    //if the song belongs in the front
    if((strcmp(n,a->name)<=0) && (strcmp(b,a->artist)<=0)){
        return insert_front(a,n,b);
    }
    //transverse a until find right spot
    while((strcmp(n,a->name)>=0) && (strcmp(b,a->artist)>=0)){
        //special case for when song belongs at the end
        if (a->next == 0){
            a->next = x;
            x->next = 0;
            return original;
        }
        copy = a;
        a = a->next;
    }
    //puts the song between copy and next
    copy->next = x;
    x->next = a;
    //printf("\n%s - %s - %s\n",copy->name,x->name,a->name);
    //printf("\n%s\n",original->name);
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
    if (strcmp(a->name,n) == 0){
        printf("Found!\n");
        return a;
    }
    printf("Not found...\n");
    return 0;
}

song * find_song2(song *a, char b[]){
    printf("Looking for songs by %s\n",b);
    while ((a->next != 0) && (strcmp(a->artist,b) != 0)){
        a = a->next;
    }
    if (strcmp(a->artist,b) == 0){
        printf("Found!\n");
        return a;
    }
    printf("Not found...\n");
    return 0;
}

//song * rand_song(song *a){}

song * remove_song(song *a, char n[]){
    song *copy,*original;
    original = a;
    //search for song name in list
    while(strcmp(n,a->name)!= 0){
        //song not found
        if (a->next == 0){
            printf("%s does not exist...\n",n);
            return original;
        }
        copy = a;
        a = a->next;
    }
    //song is first element
    if(a == original){
        original = a->next;
    }
    //song is last element
    else if(a->next == 0){
        copy->next = 0;
    }
    //song is not last element
    else{
        copy->next = a->next;
    }
    //removing song
    free(a);
    return original;
}

song * free_list(song *a){
    song *copy,*original = a;
    while(a){
        copy = a->next;
        printf("Freeing %s\n",a->name);
        free(a);
        a = copy;
    }
    return original;
}
