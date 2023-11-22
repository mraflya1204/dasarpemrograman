//Made by Muhammad Rafly Abdillah @Practicum 4 Revision

#include <stdio.h>
#define MAX_CONTACTS 20

typedef struct snail {
  int ID;
  char name[30];
} snail;

int main() {
  int contactSize;
  scanf("%d", &contactSize);
  snail snails[MAX_CONTACTS];
  int relations [20][20];

  for (int i = 0; i < contactSize; i++) {
    scanf(" %d", &snails[i].ID);
    scanf(" %s", snails[i].name);
  }

  int numOfRelations;
  scanf("%d", &numOfRelations);

  for (int i = 0; i < numOfRelations; i++) {
    int linkLocation, linkTarget;
    scanf(" %d %d", &linkLocation, &linkTarget);
    relations[linkLocation][linkTarget] = 1;
    relations[linkTarget][linkLocation] = 1;
  }

  int testCases;
  scanf("%d", &testCases);

  for (int i = 0; i < testCases; i++) {
    int startDestination, endDestination;
    scanf(" %d %d", &startDestination, &endDestination);
    
    if(relations[startDestination][endDestination] == 1){
    	printf("%s can reach %s\n", snails[startDestination].name, snails[endDestination].name);
	}
	else {
		int search = -1;
		
		for(int j = 0; j < contactSize; j++){
			if (relations[startDestination][j] && relations [j][endDestination]){
				printf("%s can reach %s\n", snails[startDestination].name, snails[endDestination].name);
				search = 1;
				break;
			}
		}
		if (search!=1){
			printf("We need more transponder snail\n");
		}
	}
  }
}

