#include <stdio.h>

int main(){
    int input; scanf("%d", &input);
    int N = input / 1000;
    int E = input / 100 % 10;
    int S = input / 10 % 10;
    int W = input % 10;
    
    printf("Captain CJ, we must go towards ");
    float sum = 0;
    if(N > S){
        printf("north");
        sum += N;
    }
    else if(N < S){
        printf("south");
        sum += S;
    }
    if(E > W){
        printf("east");
        sum += E;
    }
    else if(E < W){
        printf("west");
        sum += W;
    }
    printf("\nThe strength of wind is only %.2f captain!", sum / (N+E+S+W));
 
}
