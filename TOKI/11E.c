#include <stdio.h>
#include <string.h>

int main(){
	char str[101]; scanf("%s", str);
	
	for(int i = 0; i < strlen(str); i++){
		if(str[i]>'a') {
			str[i] = str[i] - 'a' + 'A';
		}
		else if(str[i]>='A'){
			str[i] = str[i] - 'A' + 'a';
		}
		else if(str[i]=='a'){
			str[i] = 'A';
		}
		else str[i] = str[i];
	}
	
	printf("%s", str);
}
