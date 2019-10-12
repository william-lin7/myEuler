#include <stdio.h>
#include <stdlib.h>

int mutiples();
int difference();

// problem 1
int multiples(){
  int sum = 0;
  for (int x = 3; x < 1000; x += 3){
    sum += x;
  }
  for (int x = 5; x < 1000; x += 5){
    sum += x;
  }
  for (int x = 15; x < 1000; x += 15){
    sum -= x;
  }
  return sum;
}

// problem 6
int difference(){
  int sumsq = 0;
  for (int i = 1; i <= 100; i++){
    sumsq += i * i;
  }
  int sqsum = 0;
  for (int i = 1; i <= 100; i++){
    sqsum += i;
  }
  sqsum *= sqsum;
  return sqsum - sumsq;
}

int main(){
  printf("The answer to problem 1 is %d\n", multiples());
  printf("The answer to problem 6 is %d\n", difference());
  return 0;
}
