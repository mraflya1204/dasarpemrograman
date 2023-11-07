#include <stdio.h>

int main(){
    int N; scanf("%d", &N);
    int M = 0;
    
    for(int i=0; i<N; i++){
        for(int j=0; j<=i; j++){
            printf("%d", M);
            M++;
            
            if (M==10){
                M=0;
            }
        }
        printf("\n");
    }
}