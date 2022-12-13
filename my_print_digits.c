#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_print_digits()
{
    for (char i = 48; i < 58; i++)
        my_putchar(i);
    
    my_putchar('\n');
    return 0;
}

int main()
{
    my_print_digits();
    return 0;
}