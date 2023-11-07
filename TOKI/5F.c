#include <stdio.h>
#include <math.h>

int main (){
    float N; scanf("%f", &N);
    int F = floor(N);
    int C = ceil(N);
    
    printf("%d %d", F, C);
}