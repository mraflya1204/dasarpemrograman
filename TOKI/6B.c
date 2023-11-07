#include <stdio.h>

int main(){
    int N; scanf("%d", &N);
    int total = 0;
    
    for (int i=0; i<N; i++){
        int j; scanf("%d", &j);
        total = total + j;
    }
    printf("%d", total);
}