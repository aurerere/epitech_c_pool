#include <stdio.h>
#include <stdbool.h>

int size (char * word) 
{
    int i = 0;
    while (word[i] != '\0')
        i++;

    return i;
}

bool isLetter(char x) 
{
    if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
        return true;
    return false;
}

char toLowerCase(char x)
{
    if (x < 'a')
        return x + 32;
    return x;
}

int main(int argc, char *argv[])
{
    int j = size(argv[1]) - 1;
    
    if (argc != 2) {
        printf("Invalid payload\n");
        return 1;
    }

    for (int i = 0; i < size(argv[1]); i++)
    {
        if (isLetter(argv[1][i]) && isLetter(argv[1][j])) {
            if (i == j) {
                printf("Palindrome\n");
                break;
            }
                
            if (toLowerCase(argv[1][i]) == toLowerCase(argv[1][j])) {
                if (i == j + 1) {
                    printf("Palindrome\n"); 
                    break;
                }
                else {
                    j--;
                }    
            }

            else {
                printf("Pas palindrome\n");
                break; 
            }
        }
        else {
            printf("Invalid payload\n");
            return 1;
        }
    }

    return 0;
}