//made by Muhammad Rafly Abdillah
#include <stdio.h>
#include <string.h>

typedef struct phone {
    char name[101];
} phone;

typedef struct swapPhones {
    char phone1[101];
    char phone2[101];
} swapPhones;

int main() {
    int N;
    scanf("%d", &N);
    phone phones[N];

    for (int i = 0; i < N; i++) {
        scanf("%s", phones[i].name);
    }

    int T;
    scanf("%d", &T);
    swapPhones swapPhones[T];

    for (int i = 0; i < T; i++) {
        scanf("%s", swapPhones[i].phone1);
        scanf("%s", swapPhones[i].phone2);
    }

    for (int j = 0; j < T; j++) {
        for (int i = 0; i < N; i++) {
            if (strcmp(phones[i].name, swapPhones[j].phone1) == 0) {
                strcpy(phones[i].name, swapPhones[j].phone2);
            } else if (strcmp(phones[i].name, swapPhones[j].phone2) == 0) {
                strcpy(phones[i].name, swapPhones[j].phone1);
            }
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%s ", phones[i].name);
    }

    return 0;
}

