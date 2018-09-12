#include <stdio.h>

// Problem 1 function
int multiples(){
  int sum = 0;
  int num;
  for(num = 0; num < 1000; num++) {
    if(num % 3 == 0 || num % 5 == 0) {
      sum += num;
    }
  }
  return sum;
}

// Problem 2 function
int fibSum(){
  int first = 1;
  int second = 1;
  int sum = 0;
  int temp = 0;
  while (first < 4000000 && second < 4000000) {
    temp = second;
    second = first + second;
    first = temp;
    if(first % 2 == 0) {
      sum += first;
    }
  }
  return sum;
}

// Problem 5 function
int smallestMultiple() {
  int smallestNum = 20;
  while (smallestNum %  2 != 0 || smallestNum %  3 != 0 || smallestNum %  4 != 0 || smallestNum %  5 != 0 ||
       smallestNum %  6 != 0 || smallestNum %  7 != 0 || smallestNum %  8 != 0 || smallestNum %  9 != 0 ||
       smallestNum % 10 != 0 || smallestNum % 11 != 0 || smallestNum % 12 != 0 || smallestNum % 13 != 0 ||
       smallestNum % 14 != 0 || smallestNum % 15 != 0 || smallestNum % 16 != 0 || smallestNum % 17 != 0 ||
       smallestNum % 18 != 0 || smallestNum % 19 != 0 || smallestNum % 20 != 0) {
         smallestNum += 20;
       }
  return smallestNum;
}

// Problem 6 function
int sumSquareDifference() {
  int i;
  int sumSquares = 0;
  int squareSum = 0;
  for(i = 1; i <= 100; i++) {
    sumSquares += i * i;
    squareSum += i;
  }
  squareSum = squareSum * squareSum;
  int diff = squareSum - sumSquares;
  return diff;
}

int main(){
    printf("Hello world!\n"); // test
    // Problem 1
    printf("Multiples of 3 and 5: %d\n", multiples());

    // Problem 5
    printf("Smallest number evenly divisible by all of the numbers between 1 and 20: %d\n", smallestMultiple());

    // Problem 6
    printf("Difference between the sum of the squares and the square of the sum: %d\n", sumSquareDifference());

    // Problem 2
    printf("Sum of all Fibonacci even numbers between 1 and 4,000,000: %d\n", fibSum());
    return 0;
}
