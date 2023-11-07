#include <stdio.h>
#include <math.h>

int main(){
    int N; scanf("%d", &N);
    int isNotPrime = 0;
    
    for(int i=0; i<N; i++){
        int M; scanf("%d", &M);
        if (M==1){
            isNotPrime++;
        }
        for (int j=2; j<=sqrt(M); j++){
            if(M%j==0){
                isNotPrime++;
        }
        }
        if(isNotPrime<2){
            printf("YA\n");
        }
        else printf("BUKAN\n");
        isNotPrime = 0;
    }
}