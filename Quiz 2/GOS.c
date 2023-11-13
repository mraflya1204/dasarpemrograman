//Made By Muhammad Rafly Abdillah @Quiz 2

#include <stdio.h>
#include <string.h>

typedef struct character {
  char name[101];
  char gender[101];
  int year;
  char title[101];
  int status;
} character;

int main() {
  character characters[101];
  int T; scanf(" %d", &T);

  for (int i = 0; i < T; i++) {
    scanf(" %[^\n]", characters[i].name);
    scanf(" %[^\n]", characters[i].gender);
    scanf(" %d", &characters[i].year);
    scanf(" %[^\n]", characters[i].title);
    scanf(" %d", &characters[i].status);
  }
  
  for (int i = 0; i < T; i++){
      printf("Name: %s\n", characters[i].name);
      printf("Gender: %s\n", characters[i].gender);
      printf("Year: %d\n", characters[i].year);
      printf("Title: %s\n", characters[i]. title);
      
      if(characters[i].status == 1){
          printf("Status: Alive\n");
      }
      else if (characters[i].status == 2){
          printf("Status: Deceased\n");
      }
      else printf("Status: Unknown\n");
  }
}