#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_isneg(int n)
{
    n >= 0 ? my_putchar('P') : my_putchar('N');
    my_putchar('\n');

    return 0;
}

// int main()
// {
//     my_isneg(10);
// }