#include <stdio.h>
int length(char str[]) 
{
    int len = 0;    
    while (str[len] != '\0') 
    {
        len++;
    }
    return len;
}

int main() {
    char inputstr[100];  
    puts("enter a string= ");
    gets(inputstr);
    printf("length= %d\n", length(inputstr));
}
