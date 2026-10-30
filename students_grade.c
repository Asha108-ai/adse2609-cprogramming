
#include <stdio.h>

int main()
{
    int mark;

    printf("Enter your examination mark: ");
    scanf("%d", &mark);

    if (mark < 0 || mark > 100)
    {
        printf("Invalid mark!");
    }
    else if (mark >= 70)
    {
        printf("Distinction");
    }
    else if (mark >= 60)
    {
        printf("Credit");
    }
    else if (mark >= 50)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}
