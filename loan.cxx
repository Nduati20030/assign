#include <stdio.h>

int main() {
  int age;
  float income;

  // Prompt user for age and income
  printf("Enter your age: ");
  scanf("%d", &age);
  printf("Enter your annual income in shillings: ");
  scanf("%f", &income);

  // Check if the customer qualifies for a loan
  if (age >= 21 && income >= 21000) {
  printf("Congratulations you qualify for a loan.");
  } else {
  printf("Unfortunately, we are unable to offer you a loan this time.");
  }

  return 0;
}