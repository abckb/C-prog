/* A program to test structure,datatypes and pointer in C */

#include<stdio.h>
struct data
{
    char *place;
    int distance;
    struct data *next;
};

int main()
{
    struct data dat[] = { "Chennai", 900 , dat+1,
                          "Mumbai", 1800, dat+2,
                          "Kolkata", 80, dat+3,
                          "Delhi", 1500, dat+4,
                          "Silchar", 950, dat
                        };

    printf("%s\n",dat->place);
    printf("%s\n",dat->next->place);
    printf("%s\n",dat->next->next->place);
    printf("%s\n",dat->next->next->next->place);
    printf("%s\n",dat->next->next->next->next->place);
    printf("%s\n\n",dat->next->next->next->next->next->place);
    printf("Size of dat is %d\n",sizeof(dat));
    printf("Address of dat[0] is: %ld\n",dat);
    printf("Address of dat[1] is: %ld\n\n",dat+1);

    int integer = 0;
    printf("Size of an integer data type is: %d byte\n",sizeof(integer));

    char *string = "datatypes in C programming language";
    printf("Size of a character data type is: %d byte\n",sizeof(string));
    
    char character = 'a';
    printf("Size of a character data type is: %d byte\n",sizeof(character));

    long longint = 123456789;
    printf("Size of a long data type is: %d byte\n",sizeof(longint));

    float floatdata = 0.1234;
    printf("Size of a float data type is: %d byte\n",sizeof(floatdata));
    
    double doubledata = 1.009;
    printf("Size of a double data type is: %d byte\n",sizeof(doubledata));

    printf("Machine details:\n");
    system("uname -a");
}
