/*Write a program to print out hello + a given input string
For example:
input: World!
output: hello World!
input: my friend.
output: hello my friend.*/
#include<stdio.h>
int main()
{
  char str1[10];
  printf("Input a string: ");
  scanf("%s",str1);
  printf("\n Hello %s",str1);
  return 0;
}