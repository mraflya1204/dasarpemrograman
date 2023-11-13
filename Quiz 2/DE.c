//Made By Muhammad Rafly Abdillah @Quiz 2

#include <stdio.h>

typedef struct player{
   char name[16];
   int str;
}player;

int main(){
   player players[101];
   int N; scanf(" %d", &N);

   for(int i = 0; i < N; i++){
       scanf(" %s", players[i].name);
       scanf(" %d", &players[i].str);
   }

   int X; scanf(" %d", &X);

   for(int i = 0; i < N; i++){
       if(players[i].str > X){
           printf("%s\n", players[i].name);
       }
   }
}