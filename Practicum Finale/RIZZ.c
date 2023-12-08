//made by Muhammad Rafly Abdillah @Practicum Finale
#include <stdio.h>

int main(){ 
    unsigned long long int A, B; scanf("%llu %llu", &A, &B);
    int rizz = 0;
    int buzz = 0;
    int wuzz = 0;
    unsigned long long int moduloCheck1 = A % B;
    unsigned long long int moduloCheck2 = B % A;
    
    if(A == B || moduloCheck1 == 0 || moduloCheck2 == 0){
        rizz = 1;
    }
    
    unsigned long long int bitwiseCheck = A & B;
    if((bitwiseCheck == A) || (bitwiseCheck == B)){
        buzz = 1;
    }
    if(bitwiseCheck == 0){
        wuzz = 1;
    }
    
    if(rizz == 0){
        printf("Not Rizz");
        if(buzz == 1){
            printf(", but Buzz!\n");
        }
        else if (wuzz == 1){
            printf(", but Wuzz!\n");
        }
    }
    
    else if(rizz == 1){
        printf("Rizz");
        if(buzz == 1){
            printf("Buzz\n");
        }
        else if (wuzz == 1){
            printf("Wuzz\n");
        }
    }
    
    
}
