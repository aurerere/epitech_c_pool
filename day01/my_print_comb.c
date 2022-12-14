#include <unistd.h>
#include <stdio.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_print_comb()
{
    int centaines;
    int dixaines;
    int unites;
    int n = 12;

    while (centaines <= dixaines && dixaines <= unites)
    {
        unites = n % 1000 % 100 % 10;
        dixaines = ((n % 1000 % 100) - unites) / 10;
        centaines = ((n % 1000) - dixaines - unites) / 100;

        // printf("%s", "Unites: ");
        // printf("%i", unites);
        // printf("%c", '\n');
        // printf("%s", "Dixaines: ");
        // printf("%i", dixaines);
        // printf("%c", '\n');
        // printf("%s", "Centaines: ");
        // printf("%i", centaines);
        // printf("%c", '\n');

        if (unites <= dixaines || dixaines <= centaines)
            continue;

        my_putchar(centaines + 48);
        my_putchar(dixaines + 48);
        my_putchar(unites + 48);       
        my_putchar(',');
        my_putchar(' ');

        n++;
    }
    my_putchar('\n');

    return 0;
}

int main()
{
    my_print_comb();
    return 0;
}