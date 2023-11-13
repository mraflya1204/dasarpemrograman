//Made by Muhammad Rafly Abdillah @Quiz 2

#include <stdio.h>

typedef struct player {
  char name[16];
  int str;
  int link;
} player;

int main() {
  player players[101];
  int N;
  scanf(" %d", &N);

  for (int i = 0; i < N; i++) {
    scanf(" %s", players[i].name);
    scanf(" %d", &players[i].str);
    players[i].link = -1;
  }

  int M;
  scanf(" %d", &M);

  for (int i = 0; i < M; i++) {
    int firstIndex; scanf(" %d", &firstIndex);
    int secondIndex; scanf(" %d", &secondIndex);
    players[firstIndex].link = secondIndex; 
  }

  int totalStr = 0;
  int targetIndex; scanf("%d", &targetIndex);
  
  if(targetIndex >= 0){
      totalStr += players[targetIndex].str;
  }
  if(players[targetIndex].link >= 0){
      totalStr += players[players[targetIndex].link].str;
  }
  if(players[players[targetIndex].link].link >= 0){
      totalStr += players[players[players[targetIndex].link].link].str;
  }
  if(players[players[players[targetIndex].link].link].link >= 0){
      totalStr += players[players[players[players[targetIndex].link].link].link].str;
  }
  
  printf("%d", totalStr);
  
  return 0;
}  