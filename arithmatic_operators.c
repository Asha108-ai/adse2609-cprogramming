#include <stdio.h>

int main()

{
 // variables to be used in the programm
 int firstNum =8,secondNum =5;

  //Display the value of the above variables
  printf("Value of\'firstNum\'and 'secondNum 'are %d and %d respectively.",
    firstNum,secondNum);

   //perfom the various arithemetic operation and display their results
    printf("\n%15s: %d + %d =%2d","Addition ",firstNum,secondNum, firstNum+secondNum);
    printf("\n%15s: %d x %d = %2d" , "Multiplication",firstNum, secondNum, firstNum * secondNum);
    printf("\n%15s: %d - %d = %2d","Subtraction", firstNum, secondNum, firstNum - secondNum);
    printf("\n%15s: %d / %d = %2d","Division", firstNum, secondNum, firstNum / secondNum);
    printf("\n%15s: %d %%%d = %2d","Remainder", firstNum, secondNum, firstNum % secondNum);

    return 0;
}
