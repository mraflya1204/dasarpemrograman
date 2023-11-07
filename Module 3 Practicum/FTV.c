//Muhammad Rafly Abdillah @Practicum 3

#include <stdio.h>
#include <string.h>

void findCapital(char str[]){
    char x = '0';
    
    for(int i = 0; i<strlen(str); i++){
        if(str[i]>='A' && str[i]<='Z'){
            x = str[i];
            break;
        }
    }
    
    if(x!='0'){
        printf("From the vault: \"%s\", we get %c\n", str, x);
    }
    else printf("No cap, it's an original one: \"%s\"\n", str);
}

int main(){
    int N; scanf("%d", &N);

    for(int i = 0; i<N; i++){
        char str[101]; scanf("%s", str);
        findCapital(str);
    }
}
