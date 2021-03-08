// program to stimulate a simple calculator
#include<stdio.h>
int main()
{
  int a,b;
  char op;

  ptintf("\n Enter the operation:");
  scanf("%c", &op);
  printf("\nEnter values of a and b:");
  scanf("%d%d", &a, &b);

  if(op == '+')
  printf("\n Sum = %d", a + b);

  else if (op == '-')
  printf("\n Diffrent = %d", a - b);

  else if (op == '*')
  printf("\n \n product = %d", a *b );
  else if (op == '/')
  { if (b==0)
  {
    printf("\n Denominator is zero!");
    returon 0;

  else if (op == '%' )
  {
    if(b == 0)
    {
      printf("\n Denominator is zero!");
      return 0;
    }
    else
    printf("\n Reminder = %d, a % b");
  }
}