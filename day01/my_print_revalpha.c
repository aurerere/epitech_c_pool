#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_print_alpha()
{
    for (char i = 122; i > 96; i--)
        my_putchar(i);
    
    my_putchar('\n');
    return 0;
}   

// int main()
// {
//     my_print_alpha();
//     return 0;
// }