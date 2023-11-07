#include <stdio.h>

int main(){
    char input[100];
    while (scanf("%s", input) != EOF){
        printf("%s\n", input);
    }
}