//Muhammad Rafly Abdillah @Revision 3

#include <stdio.h>

int fib(int L){
    if(L==0){
        return 2; 
    }
    else if (L==1){
        return 3;
    }
    else return fib(L-1) + fib(L-2);
}

void sound(int L){
    if(L==0){
        printf(">>\n");
    }
    
    else if (L!=0){
        sound(L-1);
        
        for(int i = 0; i<fib(L); i++){
            printf(">");
        }
        printf("\n");
        
        sound(L-1);
    }
}
    
int main(){
    int L; scanf("%d", &L);

    if(L>=0 && L<=9){
        sound(L);
    }
}
