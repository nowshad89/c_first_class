#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX_LENGTH 10000000
int main()
{
    char s[MAX_LENGTH + 1];
    scanf("%s", s);
    printf("%s\n", s);
    return 0;
}

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 10000000

int main() {
    char s[MAX_LENGTH + 1];
    int freq[26] = {0}; // array to store the frequency of each letter
    int len, i, idx;

    scanf("%s", s);
    len = strlen(s);

    for (i = 0; i < len; i++) {
        idx = s[i] - 'a'; // calculate the index of the letter
        freq[idx]++; // increment the frequency of the letter
    }

    // print the frequencies of each letter in ascending order
    for (i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c : %d\n", 'a' + i, freq[i]);
        }
    }

    return 0;
}




