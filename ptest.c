/* program to test pointer in C */

void passme(char *);
int main()
{
    char num[] = {'c', 'd', 'e'};
    printf("Addresses of elements are %ld  %ld  %ld \n", num, num+1, num+2);
    passme(num);
    long long int longint = 998877665544332211;
    printf("Size of long long int is: %d\n",sizeof(longint));
    //printf("%d",(int)*(342134213));
}

void passme(char *arr)
{
    printf("Addresses are : %ld  %ld  %ld", arr[0], arr[1], arr[2]);
}
