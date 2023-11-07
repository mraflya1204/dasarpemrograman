#include <stdio.h>

int main(){
    int n; scanf("%d", &n);
    int min = 100000;
    int max = -100000;
    
    for(n; n>=0; n--){
        int number; scanf("%d", &number);
        if (number>=max){
        max = number;
        }
        if (number<=min){
        min = number;
        }
    }
    printf("%d %d", max, min);
}