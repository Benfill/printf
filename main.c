#include "main.h"

int main()
{
    int x = printf("%R\n", "ZBI");
    int y = _printf("%R\n", "ZBI");
    printf("this is x = %d\nthis is y = %d\n", x, y);
}