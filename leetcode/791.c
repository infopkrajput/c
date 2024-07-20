#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *table;

int comp(const void *a, const void *b)
{
    return table[(*(char *)a) - 'a'] - table[(*(char *)b) - 'a'];
}

char *customSortString(char *order, char *s)
{
    table = malloc(26 * sizeof(int));
    for (int i = 0; i < strlen(order); i++)
        table[order[i] - 'a'] = i;
    qsort(s, strlen(s), sizeof(s[0]), comp);
    free(table);
    return s;
}

int main()
{
    char order[] = "cbad";
    char s[] = "abcd";
    
    printf("Original string: %s\n", s);
    printf("Custom sorted string: %s\n", customSortString(order, s));

    return 0;
}
