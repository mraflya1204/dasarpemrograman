#include <stdio.h>
#incldue <string.h>

void caesar(char* s, int k){
	for(int i = 0; i<strlen(s); i++){
		int shifted = (s[i]-'a'+k)%26+'a';
		printf("%c", shifted);
	}	
}

int main(){
	char s[101]; scanf("%s", s);
	int k; scanf("%d", &k);
	
	caesar(s, k);
}
