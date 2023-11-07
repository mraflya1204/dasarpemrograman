//made by Muhammad Rafly Abdillah @Practicum 2 Revisi

#include<stdio.h>
#include<string.h>

int main() {
	char str[101]; scanf("%s", str);
	char enc[101]; scanf("%s", enc);
	char pass[101];
    int x = 0;

	for (int i = 0; i < strlen(str); i++){
		if (str[i]=='_'){
			continue;
		}
		if (enc[0]=='_') {
			memmove(enc, enc+1, strlen(enc));
		}
		if (str[i] != enc[0]) {
			pass[x] = str[i];
			x++;
		}
		else {
			memmove(enc, enc+1, strlen(enc));
		}
	}

	if (enc[0]!=0) {
		printf("Can't get the password :(");
	}
	else {
		printf("%s", pass);
	}
}