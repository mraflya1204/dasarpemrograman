//made by Muhammad Rafly Abdillah @Quiz 3
#include <stdio.h>
#include <math.h>

void insertionSort(int ID[], int N){
    for(int i = 1; i < N; i++){
        int tempKey; 
        tempKey = ID[i];
        int j = i-1;

        while(j >= 0 && ID[j] > tempKey){
            ID[j+1] = ID[j];
            j--;
        }
        ID[j+1] = tempKey; 

    }
}

int main(){
    int N; scanf("%d", &N);
    int ID[101];

    for(int i = 0; i < N; i++){
        scanf("%d", &ID[i]);
    }

    insertionSort(ID, N);

    int Alien = ceil(N/2);
    int Sus1 = N/2-1;
    int Sus2 = N/2;

    if(N%2 == 1){
        printf("%d is the Alien!", ID[Alien]);
    }
    else if(N%2 == 0){
        printf("Idk but %d & %d kinda SUS!", ID[Sus1], ID[Sus2]);
    }
}