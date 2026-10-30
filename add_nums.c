//C program to display "Hekko World" on the console
 //pre precessor

 #include <stdio.h>

 //main function provided the entery point to the program/application

 int main()
 {
     // variables to be used in the program
     int num1, num2, sum;
     printf(" please enter the first number to be added:\n");
     // Read in the value of the first number
     scanf("%d",&num1);

      printf(" please enter the second number to be added:\n");
     // Read in the value of the first number
     scanf("%d",&num2);


     //Add the two numbers and assign the result to sum
     sum =num1 + num2;

     printf("\n%d +%d =%d\n",num1, num2, sum);

     return 0;
 }
