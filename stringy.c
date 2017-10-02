#include <stdio.h>
#include <string.h>

int strlen2(char *s);
char* strcpy2(char *dest, char *src);
char* strcat2(char *dest, char *src);
int strcmp2(char *s1, char *s2);
char* strchr2(char *s, char c);
char* strstr2(char *s1, char *s2);

int main() {
    char s1[] = "[?\n?W?";
    char s2[] = "hello";
    char s3[] = "goodbye";
    char mys1[] = "[?\n?W?";
    char mys2[] = "hello";
    char mys3[] = "goodbye";

    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    printf("s3: %s\n", s3);

    printf("Testing strlen(s2)\n");
    printf("standard: %d\n", (int) strlen(s2));
    printf("mine: %d\n", strlen2(mys2));

    printf("Testing strcpy(s1, s2)\n");
    strcpy(s1, s2);
    printf("standard: %s\n", s1);
    strcpy2(mys1, mys2);
    printf("mine: %s\n", mys1);
    return 0;
}

int strlen2(char *s) {
    int count = 0;
    while (s[count]) {
        count++;
    }
    return count;
}

char* strcpy2(char *dest, char *src) {
    int count = 0;
    while (src[count]) {
        dest[count] = src[count];
        count++;
    }
    dest[count] = 0;
    return dest;
}
