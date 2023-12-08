//made by Muhammad Rafly Abdillah
#include <stdio.h>
#include <string.h>

typedef struct isekai {
  int H;
  double A;
  char G;
  char N[101];
} isekai;

int main() {
  int N; scanf("%d", &N);
  isekai yuusha[N];

  for (int i = 0; i < N; i++) {
    scanf(" %d", &yuusha[i].H);
    scanf(" %lf", &yuusha[i].A);
    scanf(" %c\n", &yuusha[i].G);
    scanf(" %[^\n]", yuusha[i].N);
  }
  
  int weAreNotTheSame[N];
  int z = 0;
    
    for(int i = 0; i < N; i++){
        int count = 0;
        if(yuusha[i].H == yuusha[N-1-i].H){
            count++;
        }
        if(yuusha[i].A == yuusha[N-1-i].A){
            count++;
        }
        if(yuusha[i].G == yuusha[N-1-i].G){
            count++;
        }
        if(strcmp(yuusha[i].N, yuusha[N-1-i].N) == 0){
            count++;
        }
        
        if(count < 2){
            weAreNotTheSame[z] = i + 1;
            z++;
        }
    }
    
    if(z != 0){
        printf("Sebentar Dewi Shita, belum palindrom nih.\n");
        for(int i = 0; i < z; i++){
            printf("%d ", weAreNotTheSame[i]);
        }
    }
    else printf("Siap perang, Dewi Shita!\n");

}


