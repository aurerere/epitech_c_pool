#include <unistd.h>

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

int my_print_comb()
{
    int centaines;
    int dixaines;
    int unites;
    int n = 12;

    while (centaines <= 7)
    {
        unites = n % 10;
        dixaines = ((n % 100) - unites) / 10;
        centaines = ((n % 1000) - dixaines - unites) / 100;

        if (unites <= dixaines || dixaines <= centaines) {
            n++;
            continue;
        }   

        if (n != 12)
            my_putstr(", ");

        my_putchar(centaines + '0'); 
        my_putchar(dixaines + '0'); 
        my_putchar(unites + '0'); 
        n++;
    }
    my_putchar('\n');

    return 0;
}

// int main()
// {
//     my_print_comb();
//     return 0;
// }