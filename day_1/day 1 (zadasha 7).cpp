/* 7. Дана строка, содержащая текст, заканчивающийся точкой.
Вывести на экран слова, содержащие три буквы.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
 
#define Z 3
#define X 256
#define Q " ,.\t"
 
int main(void)
{
    char  A[X], *B;
    printf("Napisat reshenna: ");
    if ( !fgets(A, X, stdin) )
    {
        fprintf(stderr, "ne vdalosa vvesti danni!\n");
        exit(1);
    }
    if ( ( B = strchr(A, '.') ) == NULL )
    {
        fprintf(stderr, "Recenna povinno byti vvedeno z krapkoy!\n");
        exit(1);
    }
    *(++B) = '\0';
    printf("Slovo iz 3 znakiv:\n", Z);
    for ( B = strtok(A, Q); 
    B != NULL; B = strtok(NULL, Q) )
    if ( strlen(B) == Z )
    printf("%s\n", B);
    getch();
    return 0;
}
