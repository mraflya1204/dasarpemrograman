//made by Muhammad Rafly Abdillah
#include <stdio.h>

typedef struct item{
    int id;
    char name[101];
    int price;
    int quality;
}item;

int main(){
    int N; scanf("%d", &N);
    item items[N];
    
    for(int i = 0; i < N; i++){
        scanf("%d", &items[i].id);
        scanf("%s", items[i].name);
        scanf("%d", &items[i].price);
        scanf("%d", &items[i].quality);
    }
    
    item bestPrice = items[0];
    item bestQuality = items[0];
    
    for(int i = 1; i < N; i++){
        if(items[i].price < bestPrice.price || (items[i].price == bestPrice.price && items[i].id < bestPrice.id)){
            bestPrice = items[i];
        }
    }
    
    for(int i = 1; i < N; i++){
        if (items[i].quality > bestQuality.quality || (items[i].quality == bestQuality.quality && items[i].id < bestQuality.id)){
            bestQuality = items[i];
        }
    }
    
    printf("Best item for price is: %d %s %d %d\n", bestPrice.id, bestPrice.name, bestPrice.price, bestPrice.quality);
    printf("Best item for quality is : %d %s %d %d\n", bestQuality.id, bestQuality.name, bestQuality.price, bestQuality.quality);
}
