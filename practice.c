#include <stdio.h>

// Make a program that prints your name
// int main() {
//     char a[] = "Santiago!";
//     int b = 36;

//     printf("Hi! my name is %s\n", a);
//     printf("and i am %d !\n", b);
//     return 0;
// }

// Make a calculator for +, -, *,/

// int main(){
//     int number;

//     int numOne;
//     int numTwo;

    
    


//     printf("Would you like to add(1), multiply(2), divide(3), or subtract(4) ?");
//     scanf("%d", &number);
    
//     switch (number){
    
//     case 1:    
//     if (number = 1) {
//         printf("What's the first number you would like to add?\n");
//         scanf("%d", &numOne);

//         printf("What's the second number you would like to add?\n");
//         scanf("%d", &numTwo);

//         printf("Your answer is %d!", numOne + numTwo);
   
//     } 
//     break;

//     case 2:

//     if (number = 2) {
//         printf("What's the firt number you would like to multiply?");
//         scanf("%d", &numOne);

//         printf("What's the second number you would liek to multiply?");
//         scanf("%d", &numTwo);

//         printf("Your answer is %d", numOne * numTwo);

//     }
//     break;

//     case 3:

//     if (number = 3) {

//         printf("What's the firt number you would like to divide?");
//         scanf("%d", &numOne);

//         printf("What's the second number you would liek to divide?");
//         scanf("%d", &numTwo);

//         printf("Your answer is %d", numOne / numTwo);
//     }

//     case 4:

//     if (number = 4) {

//         printf("What's the firt number you would like to subtract?");
//         scanf("%d", &numOne);

//         printf("What's the second number you would liek to subtract?");
//         scanf("%d", &numTwo);

//         printf("Your answer is %d", numOne - numTwo);
//     }

    

//     }
    
//     return 0;

// }


// ask the user for a number and tell them if its even or odd

// int main() {
//     int a;

//     printf("Enter a number to see if it's odd or even!\n");
//     scanf("%d", &a);

//     if (a % 2 == 0) {
//         printf("It is an even number!\n");
//     }else {
//         printf("This number is odd!\n");
//     }

//     return 0;
// }

//Print out 1 to 100 with a loop

// int main() {
//     for (int i = 1; i <= 100; i++) {
//          printf("%d\n", i);
//     }
//     return 0; 
// }


// Store 5 numbers in an array and print the largest one 

// int main() {
//  int numbers[5];
//  int biggest;

//  printf("Enter 5 numbers:\n");

//  for(int i = 0; i < 5; i ++) {
//     scanf("%d", &numbers[i] );
//  }

//  biggest = numbers[0];

//  for(int i =1; i < 5; i++) {
//     if(numbers[i] > biggest) {
//         biggest = numbers[i];
//     }
//  }

//  printf("The biggest number is: %d\n", biggest);

//  return 0;
    
// }

// Write a program that give you the square of a number 

// int squared(int num){
//     return num *num;
// }

// int main() {
//     int number;
//     int square;

//     printf("What number would you like to square?");
//     scanf("%d", &number);

//     square = squared(number);

//     printf("The square of this number is %d", square);

//     return 0;
// }


int square(int num) {
    return num * num;
}

int main() {

    int numbers[5];

    printf("Enter 5 numbers:\n");

    for(int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("Squares of the numbers:\n");

    for(int i = 0; i < 5; i++) {
        printf("%d squared = %d\n", numbers[i], square(numbers[i]));
    }

    return 0;
}