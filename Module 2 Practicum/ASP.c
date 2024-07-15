//made by Muhammad Rafly Abdillah @Practicum 2 Revisi

#include<stdio.h>
#include<string.h>

int main() {
	char str[102]; scanf("%s", str);
	char enc[102]; scanf("%s", enc);
	char pass[102];
    int x = 0;

	for (int i = 0; i < strlen(str); i++){
		if (str[i]=='_'){
			continue;
		}
		if (enc[0]=='_') {
			for(int j=0; j<strlen(enc); j++){
			    enc[j] = enc[j+1];
			}
		}
		if (str[i] != enc[0]) {
			pass[x] = str[i];
			x++;
		}
		else {
			for(int j=0; j<strlen(enc); j++){
			    enc[j] = enc[j+1];
			}
		}
	}

	if (enc[0]!=0) {
		printf("Can't get the password :(");
	}
	
	else{
	for(int i=0; i<x; i++){
	    printf("%c", pass[i]);
	}
	}
}
