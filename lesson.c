#include <stdio.h>

char add(int a, int b) { return a + b; }
char sub(int a, int b) { return a - b; }
char div(int a, int b) { return a / b; }
char mul(int a, int b) { return a * b; }

int main() {
  printf("CLI CALCULATOR:\n");
  int first_digits, second_digits;

  char chosen_operand;
  int result;

  printf("Enter the first number:");
  scanf("%d", &first_digits);

  printf("Choose one of the the following operand('*' , '+' , '-' , '/'):");
  scanf(" %c", &chosen_operand);

  printf("Enter the second number:");
  scanf("%d", &second_digits);

  switch (chosen_operand) {
  case '+':
    result = add(first_digits, second_digits);
    break;
  case '-':
    result = sub(first_digits, second_digits);
    break;
  case '*':
    result = mul(first_digits, second_digits);
    break;
  case '/':
    result = div(first_digits, second_digits);
    break;
  default:
    printf("Invalid Operation");
    return 1;
  }

  printf("Result: %d\n", result);
  return 0;
}