#include <stdio.h>
int main(int argc, char const *argv[])
{
    int k, num = 30;
    k = (num > 5 ? (num <= 10 ? 100 : 200) : 500);
    printf("%d\n", k);
    return 0;
}
