#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    if(argc < 4)
    {
        printf("Error: not enough arguments");
        return 1;
    } 
    
    char* endptr;
    long answer;
    long x = strtol(argv[1], &endptr, 10);

    if (endptr == argv[1])
    {
        printf("Error: invalid first number\n");
        return 1;
    }  

    long y = strtol(argv[3], &endptr, 10);

    if (endptr == argv[3])
    {
        printf("Error: invalid second number\n");
        return 1;
    }
    
    int sign = argv[2][0];
    switch (sign) 
    {
        case '+':
            answer = x + y;
            break;
        case '-':
            answer = x - y;
            break;
        case '*':
            answer = x * y;
            break;
        case '/':
            answer = x / y;
            break;
    }
    printf("%d\n", answer);

    return 0;
}
