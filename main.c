#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char name[255];

    printf("Enter your name: ");
    fgets(name, 255, stdin);
    name[strlen(name)-1]='\o'; /* remove the new line at the and */
    printf("Hello, %s!\n", name);
    return 0;
}

