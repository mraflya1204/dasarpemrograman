//made by Muhammad Rafly Abdillah
#include <stdio.h>
#define MAXLEN1 250
#define MAXLEN2 2000

void encryptBinary(char str[], char binary[]) {
  int i = 0;
  int j = 0;
  while (str[i] != '\0') {
    char byte = str[i];
    
    for (int k = 7; k >= 0; k--) {
      if ((byte & (1 << k)) == 0) {
        binary[j] = '0';
      } else {
        binary[j] = '1';
      }
      j++;
    }
    i++;
  }
  binary[j] = '\0';
}

void decryptBinary(char binary[], char decryptedBinary[]) {
  int i = 0;
  int j = 0;
  int byte = 0;

  while (binary[i] != '\0') {
    if (binary[i] == '1') {
      byte |= 1 << (7 - j);
    }
    if (j == 7) {
      decryptedBinary[i / 8] = byte;
      byte = 0;
      j = 0;
    } else {
      j++;
    }
    i++;
  }
  decryptedBinary[i / 8] = byte;
  decryptedBinary[(i / 8) + 1] = '\0'; 
}

int main() {
  int C; scanf("%d\n", &C);

  if (C == 1) {
    char str[MAXLEN1];
    int index = 0;
    while (scanf("%c", &str[index]) != EOF){
      index++;
    }
    str[index] = '\0';
    char binary[MAXLEN2];
    encryptBinary(str, binary);
    printf("%s", binary);
  } 
  
  else if (C == -1) {
    char binary[MAXLEN2];
    int index = 0;
    while (scanf(" %c", &binary[index]) != EOF) {
      index++;
    }
    binary[index] = '\0';
    char decryptedBinary[MAXLEN2];
    decryptBinary(binary, decryptedBinary);
    printf("%s", decryptedBinary);
  }
}
