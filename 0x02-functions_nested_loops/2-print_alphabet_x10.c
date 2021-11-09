#include <stdio.h>
void print_alphabet_x10(void);
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet_x10();
    return (0);
}


void print_alphabet_x10(void)
{
    char c = 'a';
    int i = 0;
    
    while(i < 10)
    {
        while(c <= 'z')
        {
            putchar(c);
            c++;
        }
        putchar('\n');
        c = 'a';
        i++;
    }
    
    return;
}