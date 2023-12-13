// بِسْمِ اللّهِ الرَّحْمَنِ الرَّحِيْ
// Made by Muhammad Rafly Abdillah @EAS
#include <stdio.h>
#include <string.h>

typedef struct food {
    char name[31];
    int price;
    int quality;
}food;

int compareFoodsQ(const void* a, const void* b) {
    const food* f1 = (const food*)a;
    const food* f2 = (const food*)b;

    if (f1->quality != f2->quality) {
        return f2->quality - f1->quality;
    } 
    else if (f1->price != f2->price) {
        return f2->price - f1->price;
    } 
    else {
    return -strcmp(f1->name, f2->name);
    }
}

int compareFoodsS(const void* a, const void* b) {
    const food* f1 = (const food*)a;
    const food* f2 = (const food*)b;

    if (f1->name != f2->name) {
        return -strcmp(f2->name, f1->name);
    } 
    else if (f1->price != f2->price) {
        return f2->price - f1->price;
    } 
    else {
        return f2->quality - f1->quality;
    }
}

int compareFoodsP(const void* a, const void* b) {
    const food* f1 = (const food*)a;
    const food* f2 = (const food*)b;

    if (f1->price != f2->price) {
        return f2->price - f1->price;
    }     
    else if (f1->quality != f2->quality) {
        return f2->quality - f1->quality;
    } 
    else {
        return -strcmp(f2->name, f1->name);
    }
}

int main() {
    int N; scanf("%d", &N);
    food foods[N];

    for (int i = 0; i < N; i++) {
        scanf(" %s", foods[i].name);
        scanf(" %d", &foods[i].price);
        scanf(" %d", &foods[i].quality);
    }
  
    int K; scanf("%d", &K);
    char M; scanf(" %c", &M);
  
    if(M=='Q'){
        qsort(foods, N, sizeof(food), compareFoodsQ);
    }
    else if(M=='P'){
        qsort(foods, N, sizeof(food), compareFoodsP);
    }
    else if(M=='S'){
        qsort(foods, N, sizeof(food), compareFoodsS);
    }

    for (int i = 0; i < K; i++) {
        printf("%s %d %d\n", foods[i].name, foods[i].price, foods[i].quality);
    }
}
