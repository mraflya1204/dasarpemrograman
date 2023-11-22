//Made by Muhammad Rafly Abdillah @Practicum 4

#include <stdio.h>

typedef struct cyclist{
    char name[101];
    int finishTime;
    int skillPoint;
}cyclist;


int main(){
    int numOfCyclist; scanf("%d", &numOfCyclist);
    cyclist cyclists [numOfCyclist];

    for(int i = 0; i < numOfCyclist; i++){
        scanf(" %s", cyclists[i].name);
        scanf(" %d", &cyclists[i].finishTime);
        scanf(" %d", &cyclists[i].skillPoint);
    }

    int winningTime = 100000;
    int winningSkillPoint = 0;
    int tempWinner = 0;

    for (int i = 0; i < numOfCyclist; i++){
        if(cyclists[i].finishTime < winningTime){
            tempWinner = i;
            winningSkillPoint = cyclists[i].skillPoint;
            winningTime = cyclists[i].finishTime;
            
        }
        else if(cyclists[i].finishTime == winningTime){
            if(cyclists[i].skillPoint > winningSkillPoint){
                tempWinner = i;
                winningSkillPoint = cyclists[i].skillPoint;
                winningTime = cyclists[i].finishTime;
            }
            else if (cyclists[i].skillPoint == winningSkillPoint){
                tempWinner = -1;
            }
        }
    }
    
    if(tempWinner==-1){
        printf("It's a tie! Rematch!");
    }
    else printf("%s wins!", cyclists[tempWinner].name);
}   