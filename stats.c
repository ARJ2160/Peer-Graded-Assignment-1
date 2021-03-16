/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file <stats.c>
 * @brief <This program calculates the statistics of given array>
 *
 * <The program calculates the Maximum,minimum,mean,median etc of the given array and also display arrays in original and descendng form>
 *
 * @author <Atharva Joshi>
 * @date <13th July 2020 >
 *
 */
#include <stdio.h>
#define SIZE (40)
#include "stats.h"
void main()
{
	int i;
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
int n=sizeof(test);
//All Implementation goes here
  print_array(test,n);//For printing array
  printf("\n");
  for(i=0;i<=n-1;i++)
  {
     printf("%u\t", test[i]);
  }
  printf("\n");
  print_statistics(test,n);//For printing statistics
  printf("\n"); 
  sort(test,n);//For print in descending order
	printf("\n");
    for(i=0;i<n;i++)
     {
        printf("%u\t", test[i]);
     }
}//main ends
void print_statistics(unsigned char test[SIZE],int n)//To find statistics
{
  find_median(test,n);
  find_mean(test,n);
  find_maximum(test,n);
  find_minimum(test,n);printf("\n");
}//print_statistics end
void find_median(unsigned char test[SIZE],int n)//To find median
{
    int temp,i,j;
    for(i = 0;i < n-1;i++)
    {
      for(j = 0;j < n-i-1;j++)
      {
         if(test[j] > test[j+1])
            {
            	temp=test[j];
            	test[j]=test[j+1];
            	test[j+1]=temp;
            }
      }
   }
  printf("\nThe Median of the array is=%u",(test[(n-1)/2]+test[n/2])/2);
}//find_median ends
void sort(unsigned char test[SIZE],int n)//To sort in Descending order
{
  int temp,i,j;
    for(i = 0;i < n-1;i++)
      {
        for(j = 0;j < n-i-1;j++)
        {
          if(test[j] < test[j+1])
              {
                temp=test[j];
                test[j]=test[j+1];
                test[j+1]=temp;
              }
        }
    }
   printf("\nArray in Descending Order=");
}//sort ends
void find_mean(unsigned char test[SIZE],int n)//To find mean
{
    int mean; double total=0.0;
	for(int i=0;i<n;i++)
	{
		total+=test[i];
	}
	mean=total/n;
        printf("\nThe Mean of the array is=%u",mean);
}//find_mean ends
void find_maximum(unsigned char test[SIZE],int n)//To find maximum value
{
    printf("\nThe Maximum value from the array is=%u",test[n-1]);
}//find_maximum ends
void find_minimum(unsigned char test[SIZE],int n)//To find minimum value
{
     printf("\nThe Minimum value from the array is=%u",test[0]);
}//find_minimum ends
void print_array(unsigned char test[SIZE],int n)//To print original array
{
    int i;
    printf("Original Array=");
}//print_array ends
