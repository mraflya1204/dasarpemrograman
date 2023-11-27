//Made by Muhammad Rafly Abdillah @Quiz 3

#include <stdio.h>
#include <string.h>

typedef struct ingredients{
    int type;
    char name[101];
}ingredient;

void insertionSort(int initial[], ingredient ingredients[], int N){
    for(int i = 1; i < N; i++){
        ingredient tempIngredient;
        
        tempIngredient = ingredients[i];
        int j = i-1;

        while(j >= 0 && strcmp(ingredients[j].name, tempIngredient.name) > 0){
            initial[j+1] = initial[j];
            ingredients[j+1] = ingredients[j];
            j--;
        }
        ingredients[j+1] = tempIngredient;

    }
}

int main(){
    int N; scanf("%d", &N);
    ingredient ingredients[N];

    for(int i = 0; i < N; i++){
        scanf(" %d", &ingredients[i].type);
        scanf(" %s", ingredients[i].name);
    }
    
    int initial[N];
    for(int i = 0; i < N; i++){
        initial[i] = ingredients[i].name[0];
    }
    
    insertionSort(initial, ingredients, N);
    
    for(int i = 0; i < N; i++){
        if(ingredients[i].type == 1){
            printf("Cake base: %s\n", ingredients[i].name);
        }
    }
    for(int i = 0; i < N; i++){
        if(ingredients[i].type == 2){
            printf("Cream: %s\n", ingredients[i].name);
        }
    }
    for(int i = 0; i < N; i++){
        if(ingredients[i].type == 3){
            printf("Topping: %s\n", ingredients[i].name);
        }
    }
    
}