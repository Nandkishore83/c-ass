#include<stdio.h>
#include <string.h>

void my_strcat(char *s1, char *s2);

int main() {
    char s1[2000], s2[1000];  // s1 needs enough space for both strings
    
    printf("Enter the first string: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';
    
    printf("Enter the second string: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = '\0';
    
    if (strlen(s1) + strlen(s2) >= sizeof(s1)) {
        printf("Error: Combined string would be too long\n");
        return 1;
    }
    
    my_strcat(s1, s2);
    printf("Concatenated string: %s\n", s1);
    
    return 0;
}

void my_strcat(char *s1, char *s2) {
    while (*s1 != '\0') {
        s1++;
    }
    
    while (*s2 != '\0') {
        *s1 = *s2;
        s1++;
        s2++;
    }
    
    *s1 = '\0';
}
