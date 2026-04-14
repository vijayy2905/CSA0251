#include <stdio.h>
void main()
{
    float a,b;
    char c;
    printf("Enter the two numbers: ");
    scanf("%f %f",&a,&b);
    printf("Enter the operator: ");
    scanf(" %c",&c);
    switch(c)
    {
        case '+':
            printf("%.2f",a+b);
            break;
        case '-':
            printf("%.2f",a-b);
            break;
        case '*':
            printf("%.2f",a*b);
            break;
        case '/':
            printf("%.2f",a/b);
            break;
        default:
            printf("Invalid operator");
    }
}
