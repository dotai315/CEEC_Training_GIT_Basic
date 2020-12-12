#include <stdio.h> // just add comment for fourth edition
int main()
{
    char a[] = "Hello World!\n\r";	
    
    int i = 0;
    while(a[i] != '\0')
    {
        printf("%c", a[i]);
    }
    printf("Good Bye World!\n\r");

    return 0;
}
