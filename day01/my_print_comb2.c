#include <unistd.h>
#include <stdio.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char * s)
{
    int i = 0;

    while (s[i] != '\0') {
        my_putchar(s[i]);
        i++;
    }
}

char * str_from_int(int i)
{
    char unites = (i % 10) + '0';
    char dixaines = ((i % 100) - unites) + '0';

    char * str = { dixaines, unites };
    return str;
}

int my_print_comb2()
{
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (i == 0 && j == 0)
                my_putstr(", ");

            my_putstr(str_from_int(i));
            my_putchar(' ');
            my_putstr(str_from_int(j));
        }
    }

    return 0;
}

int main()
{
    my_print_comb2();
    return 0;
}

