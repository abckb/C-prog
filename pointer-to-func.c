#include<stdio.h>
#include<ctype.h>
#include<string.h>

void toup(char *);
void tolow(char *);
void printit(char *, void (*)(char *));

int main(int argc, char *argv[])
{
   int istolower;
   if(argc == 3)
       ((strcmp(argv[1], "-l") == 0) ? (istolower = 1) : (istolower = 0));
   else
   {
       puts("Improper invokation");
       return(1);
   }

   printit(argv[2], (void (*)(char *))(istolower ? tolow : toup));  //tolow and toup are the pointers to 
   return(0);                                                      //tolow() and toup() respectively.
}

void printit(char *str, void (*lowup)(char *))
{
    (*lowup)(str);      //lowup is the pointer to function passed from main()
}                       //and (*lowup)(str) is the actual call to it

void tolow(char *str)
{
    int i;
    for(i = 0; *(str + i) != '\0'; i++)
        printf("%c",tolower(*(str + i)));
}

void toup(char *str)
{
    int i;
    for(i = 0; *(str + i) != '\0'; i++)
        printf("%c",toupper(*(str + i)));
}
