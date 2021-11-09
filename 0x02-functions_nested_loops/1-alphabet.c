#include <stdio.h>

void print_alphabet(void)
{
        char character = 'a';

        while(character <= 'z')
        {
                putchar(character);
                character++;
        }
        putchar('\n');

        return;               
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}
