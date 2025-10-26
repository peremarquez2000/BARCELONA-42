#include <stdio.h>
#include <stdarg.h>
int sum(int count, ...) {
   va_list args;
   int tot = 0;
   
   // Set the va_list variable with the last fixed argument
   va_start(args, count);
   
   // Retrieve the arguments and calculate the sum
   for (int i = 0; i < count; i++) {
      tot = tot + va_arg(args, int);
   }
   
   // use the va_end to clean va_list variable
   va_end(args);
   
   return tot;
}

int main() {
   // Call the sum, with number of arguments
   printf("Sum of 3, 5, 7, 9: %d\n", sum(4, 3, 5, 7, 9));
   printf("Sum of 1, 2, 3, 4, 5: %d\n", sum(5, 1, 2, 3, 4, 5));
   return 0;
}