#include <stdio.h>
int main() {
    int x;
    float y;
    char str[50] = "This string 4 stored 2.5";
    sscanf(str, "%*s %*s %d %*s %f", &x, &y);
    printf("%d %f\n", x, y);
    return 0;
}
