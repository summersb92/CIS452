#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 9

int main()
{
    char *data1;
    int i;

    data1 = malloc (SIZE);
    printf ("Please input your eos username: ");
    scanf ("%s", data1);
    for (i=0; i<16; i++)
       printf ("%c", data1[i]);
    printf ("\n");
    free (data1);
    return 0;
}
