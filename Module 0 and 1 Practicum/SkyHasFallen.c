//Made by Muhammad Rafly Abdillah @15:46 Practicum 1

#include <stdio.h>

int main(){
    int S; scanf("%d", &S);
    int LP; scanf("%d", &LP);
    int x = -1;
    int y = -1;
    int z = -1;    
    
    if(S>0){
    if(S>25){
        printf("You will fall soon!\n");
    }
    else if (S>=15 && S<=25){
        printf("Don't be rash, Langit!\n");
    }
    else if (S>=8 && S<=15){
        printf("Good speed! You can turn peacefully :)\n");
    }
    else if (S<8){
        printf("Oh no! The vehicles behind you went mad!\n");
    }
    }
    
    if(LP>99 && LP<10000){
        x = LP/6;
        y = LP/18;
        z = x + y;
        
        if((z>64 && z<91) || (z>96 && z<123)){
            printf("Cool, the alphabet is %c", z);
        }
        else printf("Not cool, blah blah blah.");
    }
    else if(LP>0 && LP<100){
        printf("Skip it!");
}
}
