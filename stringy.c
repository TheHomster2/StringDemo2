#include <stdio.h>
#include <string.h>

int strlen2(char *s) {
    int count = 0;
    while (s[count]) {
        count++;
    }
    return count;
}

int main()
{
    char *c = "hello";
    printf("Using default strlen len of 'hello' is: %d\n", strlen(c));
    printf("Using new strlen len of 'hello' is: %d\n", strlen2(c));
    return 0;
}
