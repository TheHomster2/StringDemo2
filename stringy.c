#include <stdio.h>
#include <string.h>

int strlen2(char *s);
char* strcpy2(char *dest, char *src);
char* strncpy2(char *dest, char *src, int n);
char* strcat2(char *dest, char *src);
int strcmp2(char *s1, char *s2);
char* strchr2(char *s, char c);
char* strstr2(char *s1, char *s2);

int main() {
    char s1[] = "[?\n?W?";
    char s2[] = "hello";
    char s3[] = "goodbye";
    char s4[] = "This is pie.";
    char s5[] = "     /";
    char mys1[] = "[?\n?W?";
    char mys2[] = "hello";
    char mys3[] = "goodbye";
    char mys4[] = "This is pie.";
    char mys5[] = "     /";

    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    printf("s3: %s\n", s3);
    printf("s4: %s\n", s4);
    printf("s5: %s\n\n", s5);

    printf("Testing strlen(s2)\n");
    printf("standard: %d\n", (int) strlen(s2));
    printf("mine: %d\n", strlen2(mys2));
    printf("standard: %d\n", (int) strlen(s5));
    printf("mine: %d\n", strlen2(mys5));
    

    printf("Testing strcpy(s1, s2)\n");
    strcpy(s1, s2);
    printf("standard: %s\n", s1);
    strcpy2(mys1, mys2);
    printf("mine: %s\n", mys1);

    printf("Testing strncpy(s3, s2, 3)\n");
    strncpy(s3, s2, 3);
    printf("standard: %s\n", s3);
    strncpy2(mys3, mys2, 3);
    printf("mine: %s\n", mys3);


    printf("Testing strcat(s1, s3)\n");
    strcat(s1, s2);
    printf("standard: %s\n", s1);
    strcat2(mys1, mys2);
    printf("mine: %s\n", mys1);

    printf("Testing strcmp(s1, s3)\n");
    printf("Comparing ab to abc\n");
    printf("standard: %d\n", strcmp("ab", "abc"));
    printf("mine: %d\n", strcmp2("ab", "abc"));
    printf("Comparing abc to ab\n");
    printf("standard: %d\n", strcmp("abc", "ab"));
    printf("mine: %d\n", strcmp2("abc", "ab"));
    printf("Comparing ab to ab\n");
    printf("standard: %d\n", strcmp("ab", "ab"));
    printf("mine: %d\n", strcmp2("ab", "ab"));

    printf("Testing strchr(s1, 'z')\n");
    printf("standard: %p\n", strchr("abcz", 'z'));
    printf("mine: %p\n", strchr2("abcz", 'z'));
    printf("Testing strchr(s1, ' ')\n");
    printf("standard: %p\n", strchr("abcz ", ' '));
    printf("mine: %p\n", strchr2("abcz ", ' '));
    

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

char* strncpy2(char *dest, char *src, int n) {
    int count = 0;
    while (src[count] && count < n) {
        dest[count] = src[count];
        count++;
    }
    return dest;
}

char* strcat2(char *dest, char *src){
	int count = 0;
	int count2;
	while (dest[count]) {
		count++;		
	}
	for (count2 = 0; count2 < strlen2(src); count2++){
		dest[count] = src[count2];
		count++;
	}
	dest[count] = 0;
	return dest;
}

int strcmp2(char *s1, char *s2) {
    int index = 0;
    while (s1[index] == s2[index] && s1[index]) {
        //printf("currently: %c and %c\n", s1[index], s2[index]);
        index++;
    }
    return s1[index] - s2[index];
}

char* strchr2(char *s, char c) {
    int index = 0;
    while (s[index] != c && &s) {
        index++;
    }
    return s + index;
}
