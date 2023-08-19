#include "main.h"

int main()
{
	int i, y;

	char str[5] = "";
	i = printf("%S\n", "Best\nSchool");
	y = _printf("%S\n", "Best\nSchool");
	printf("%d\n%d\n", i, y);
}
