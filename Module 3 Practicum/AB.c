//Muhammad Rafly Abdillah @Practicum 3

#include <stdio.h>

int abNacci(int A, int B, int K){
    if(K==0){
        return A; 
    }
    else if (K==1){
        return B;
    }
    else return abNacci(A, B, K-1) + abNacci(A, B, K-2);
}

int main(){
    int N; scanf("%d", &N);

    for(int i = 0; i<N; i++){
        int A, B, K; scanf("%d%d%d", &A, &B, &K);
        printf("%d\n", abNacci(A, B, K));
    }
    
}
