#include<stdio.h>
int main()
{
    printf("%d\n",BUFSIZ);
    if(_IOFBF)
        puts("I/O fully buffered");

    if(_IOLBF)
        puts("I/O line buffered");

    if(_IONBF)
        puts("I/O unbuffered");
    printf("%d", EOF);
}
