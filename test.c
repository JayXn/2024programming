#include <stdio.h>

void generateLookAndSay(char *prev, int n) {
    if (n == 0) {
        return;
    }

    printf("%s\n", prev);

    char next[40];  
    int count = 1;
    char currentDigit = prev[0];
    int index = 0;

    for (int i = 1; prev[i] != '\0'; i++) {
    if (prev[i] == currentDigit) {
        count++;
    } else {
        index += sprintf(&next[index], "%d%c", count, currentDigit);
        currentDigit = prev[i];
        count = 1;
    }
  }

    index += sprintf(&next[index], "%d%c", count, currentDigit);
    next[index] = '\0';

    generateLookAndSay(next, n - 1);
}


int main() {
    int N;

    scanf("%d", &N);
    char start[] = "1";

    generateLookAndSay(start, N);
    return 0;
}

