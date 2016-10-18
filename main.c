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
    song *x,*copy,*original;
    original = a;
    x = (song *)malloc(sizeof(song));
    x->name = n;
    x->artist = b;
    if((strcmp(n,a->name)>0) && (strcmp(b,a->artist)>0)){
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
    while ((a->next != 0) && (strcmp(a->artist,) != 0)){
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
    while((strcmp(n,a->name)!= 0) && (strcmp(b,a->artist)!= 0)){
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

int main(){
    printf("Adding Scientist - Coldplay...\n");
    song * a = insert_front(0,"Scientist","Coldplay");
    printf("Adding Warriors - Imagine Dragons...\n");
    a = insert_order(a,"Warriors","Imagine Dragons");
    printf("Adding King and Lionheart - Of Men and Monsters...\n");
    a = insert_order(a, "King and Lionheart", "Of Men and Monsters");
    print_list(a);
    return 0;
}











