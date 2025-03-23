#include <stdio.h>

/* function main begins program execution */
int main( void )
{
   int integer1; /* integer 1 den sonra ; konulmalı  */
   int integer2; /* integer 2 den sonra ; konulmalı*/
   int sum;      /*variable should be sum not x*/ 

   printf( "Enter first integer\n "); /* prompt */
   scanf( "%d", &integer1 );        /* read an integer */

   printf( "Enter second integer\n" ); /* prompt */
   scanf( "%d", &integer2 );           /* read an integer */
   
   sum = integer1 + integer2; /* assign total to sum */

   printf( "Sum is %d\n", sum ); /* print sum */
   return 0; /* indicate that program ended successfully */

} /* end function main */