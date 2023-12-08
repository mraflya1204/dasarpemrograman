//made by Muhammad Rafly Abdillah @Practicum Finale
#include <stdio.h>
#include <string.h>

void caesarDecrypt(char password[], int K, char decryptedPassword[]){
    int len = strlen(password);
    for(int i = 0; i < len; i++){
        decryptedPassword[i] = (password[i] + K - 97) % 26 + 97;
    }
}

int main(){
    char password[101]; scanf("%s", password);
    int K; scanf("%d", &K);
    char decryptedPassword[101];
    int len = strlen(password);
    
    caesarDecrypt (password, K, decryptedPassword);
    for(int i = 0; i < len; i++){
    	printf("%c", decryptedPassword[i]);
	}
	
	return 0;
}
