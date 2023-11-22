//made by Muhammad Rafly Abdillah @Practicum 4 Revision

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct cultist {
    char name[2049];
    struct cultist *link;
} cultist;

void search(cultist *connections, int *state, char *start, char *end) {
    if (strcmp(connections->name, end) == 0) {
        printf("%s", connections->name);
        return;
    } else if (connections->link == NULL) {
        return;
    } else {
        if (strcmp(connections->name, start) == 0) {
            *state = 1;
            printf("%s->", connections->name);
            search(connections->link, state, start, end);
            return;
        } else if (*state == 1) {
            printf("%s->", connections->name);
            search(connections->link, state, start, end);
            return;
        } else {
            search(connections->link, state, start, end);
            return;
        }
    }
}

int main() {
    int N; scanf("%d", &N);
    char str1[2047] = {0};
    char str2[2047] = {0};

    cultist *connections = malloc(N * sizeof(cultist));

    for (int i = 0; i < N; i++) {
        scanf(" %s", connections[i].name);
        
        if (i != 0) {
            connections[i - 1].link = &connections[i];
        }
    }

    scanf(" %s", str1);
    scanf(" %s", str2);

    int state = 0;
    search(connections, &state, str1, str2);
    free(connections);
}