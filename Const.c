#include<stdio.h>
int main()
{
   const int data = 10;
   int *p_data = &data;

   printf("Data before changing value is %d",data);
   
   //Changing the value of constant data using pointer
   *p_data = 50;

   printf("Data after changing value is %d",data);

   return 0;
}
