//Made by Muhammad Rafly Abdillah @Practicum 2

#include <stdio.h>

int main(){
    int N; scanf("%d", &N);
    int minimum = 0;
    int current = 0;
    
    for(int i = 0; i<N; i++){
        int A, B; scanf("%d%d", &A, &B);
        
        current = current - B + A;
        if(current>minimum){
            minimum=current;
        }
    }
    printf("%d", minimum);
}