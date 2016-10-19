#include <stdio.h>
#include <stdlib.h>
//#include "func.h"
#include "structs.h"




int main(){
    printf("Adding Scientist - Coldplay...\n");
    song * a = insert_front(0,"Scientist","Coldplay");
    printf("Adding Warriors - Imagine Dragons...\n");
    a = insert_order(a,"Warriors","Imagine Dragons");
    printf("Adding King and Lionheart - Of Men and Monsters...\n");
    a = insert_order(a, "Ding and Lionheart", "Of Men and Monsters");
    // print_list(a);
    return 0;
}
