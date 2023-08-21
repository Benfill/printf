#include	"main.h"

int main(void)
{
    _putstr("Hello, World!\n", 'S');
    _putstr("This is a test.\n", 'S');
    _putstr("Non-printable: \x01\x02\x03\x7F\x80\xFF\n", 'S');
    return (0);
}
