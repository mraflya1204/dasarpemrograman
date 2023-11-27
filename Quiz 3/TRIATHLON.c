//made by Muhammad Rafly Abdillah @Quiz 3

#include <stdio.h>

typedef struct athlete{
    char name[101];
    double swimTime;
    double cycleTime;
    double runTime;
    double totalTime;
}athlete;

void insertionSort(double arr[], athlete athletes[], int N){
    for(int i = 1; i < N; i++){
        double tempKey;
        athlete tempAthletes;
        
        tempKey = arr[i];
        tempAthletes = athletes[i];
        int j = i-1;

        while(j >= 0 && arr[j] > tempKey){
            arr[j+1] = arr[j];
            athletes[j+1] = athletes[j];
            j--;
        }
        arr[j+1] = tempKey; 
        athletes[j+1] = tempAthletes;

    }
}

int main(){
    int N; scanf("%d", &N);
    athlete athletes[N];

    for (int i = 0; i < N; i++){
        double minutes, seconds, miliseconds;
        scanf(" %s", athletes[i].name);
        for(int j = 0; j < 3; j++){
            scanf("%lf:%lf.%lf", &minutes, &seconds, &miliseconds);
            if(j == 0){
                athletes[i].swimTime = (minutes*60) + (seconds) + (miliseconds/1000);
            }
            else if (j == 1){
                athletes[i].cycleTime = (minutes*60) + (seconds) + (miliseconds/1000);
            }
            else if (j == 2){
                athletes[i].runTime = (minutes*60) + (seconds) + (miliseconds/1000);
            }
        }
        athletes[i].totalTime = athletes[i].runTime + athletes[i].cycleTime + athletes[i].swimTime;
    }

    double totalTime[N];
    for(int i = 0; i < N; i++){
        totalTime[i] = athletes[i].totalTime;
    }
    
    insertionSort (totalTime, athletes, N);
    
    printf("Top 3 Triathlon\n");
    for(int i = 0; i < 3; i++){
        printf("%d. %s\n", i+1, athletes[i].name);
    }
    
    printf("\n");
    
    double swimTime[N];
    for(int i = 0; i < N; i++){
        swimTime[i] = athletes[i].swimTime;
    }

    insertionSort(swimTime, athletes, N);

    printf("Top 3 Swimming\n");
    for(int i = 0; i < 3; i++){
        printf("%d. %s\n", i+1, athletes[i].name);
    }
    
    printf("\n");
    
    double cycleTime[N];
    for(int i = 0; i < N; i++){
        cycleTime[i] = athletes[i].cycleTime;
    }

    insertionSort(cycleTime, athletes, N);

    printf("Top 3 Cycling\n");
    for(int i = 0; i < 3; i++){
        printf("%d. %s\n", i+1, athletes[i].name);
    }
    
    printf("\n");
    
    double runTime[N];
    for(int i = 0; i < N; i++){
        runTime[i] = athletes[i].runTime;
    }

    insertionSort(runTime, athletes, N);

    printf("Top 3 Running\n");
    for(int i = 0; i < 3; i++){
        printf("%d. %s\n", i+1, athletes[i].name);
    }
    
    return 0;
}