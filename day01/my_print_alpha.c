#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_print_revalpha()
{
    for (char i = 97; i < 123; i++)
        my_putchar(i);
    
    my_putchar('\n');
    return 0;
}   

// int main()
// {
//     my_print_revalpha();
//     return 0;
// }