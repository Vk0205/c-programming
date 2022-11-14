#include<stdio.h>

int main()
{
    float a, b;
    char symbol;
   
    printf("-----Basic Calculator------\n\n");
   
    printf("Enter first number: ");
    scanf("%f", &a);
   
    printf("Enter second number: ");
    scanf("%f", &b);
   
    getchar();
   
    printf("\nWhat operation do you want to perform (+,-,*,/,%)??? ");
    scanf("%c", &symbol);
   
    switch(symbol)
    {
      case '+':
        printf("\nAnswer: %.2f", a + b);
        break;
       
      case '-':
        printf("\nAnswer: %.2f", a - b);
        break;
       
      case '*':
        printf("\nAnswer: %.2f", a * b);
        break;
       
      case '/':
        if(b != 0)
          printf("\nAnswer: %.4f",(float) a / b);
        else
          printf("\nError.. Denominator can't be 0!!");
        break;
       
      case '%':
        if(b != 0)
          printf("\nAnswer: %.2f", (float)((int)a % (int)b));
        else
          printf("\nError!!.. Denominator can't be 0!!");
        break;
       
      default:
        printf("\nInvalid.... Try Again");
        break;
   
    }
    return 0;
}
