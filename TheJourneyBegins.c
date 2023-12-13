// بِسْمِ اللّهِ الرَّحْمَنِ الرَّحِيْ
// Made by Muhammad Rafly Abdillah @EAS
#include <stdio.h>

typedef struct item{
    char name [21];
}item;

int fibSeq(int K){
    if(K<1){
        return 0;
    }
    else if (K==1){
        return 1;
    }
    
    else return fibSeq(K-1) + fibSeq(K-2);
}


int main(){
    int N; scanf("%d", &N);
    item items[N];

    for(int i = 0; i < N; i++){
        scanf(" %s", items[i].name);
    }

    int M; scanf("%d", &M);
    for(int i = 0; i < M; i++){
        int fibNum; scanf("%d", &fibNum);
        int fibb = fibSeq(fibNum);
        char itemA [21]; scanf("%s", &itemA);
        char itemB [21]; scanf("%s", &itemB);
        int itemANum;
        int itemBNum;
        
        for(int i = 0; i < N; i++){
            if(strcmp(itemA, items[i].name) == 0){
                itemANum = i;
            }
            if(strcmp(itemB, items[i].name) == 0){
                itemBNum = i;
            }
        }

        if(fibb % 2 != 0){
            item tempKey = items[itemANum];
            items[itemANum] = items[itemBNum];
            items[itemBNum] = tempKey;
        }
    }
    
    for(int i = 0; i < N; i++){
        printf("%s\n", items[i].name);
    }
}