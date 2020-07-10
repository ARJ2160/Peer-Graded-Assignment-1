#include <stdio.h>
#define SIZE (40)
void main()
{

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
/* Other Variable Declarations Go Here */
int median,mean,max,min,i,j,a,med,m1,m2,m3;
int n=sizeof(test);
/* Add other Implementation File Code Here */

void print_array()
{
  for(i=0;i<n;i++)
  {
  printf("%u\n", test[i]);
  }
}//To print the array
int find_median()
{
  void swap(int p,int q) {
   int t;

   t=p;
   p=q;
   q=t;
}
void sort(unsigned char test[SIZE],int n) {
   for(i = 0;i < n-1;i++) {
      for(j = 0;j < n-i-1;j++) {
         if(test[j] > test[j+1])
            swap(test[j],test[j+1]);
      }
   }
}
    sort(test,n);
    n = (test[(n-1)/2] + test[n/2])/2;
   return med;
}//To find median of given array
int find_mean()
{
  for(i=0;i<=n;i++)
    {m1+=test[i];}
    m1/=40;
    return m1;
}//To find mean
int find_maximum()
{
  for(i = 0;i <= n;i++) {
    m2=test[i];
    if(m2<test[i+1])
    m2=test[i+1];
  }
  return m2;
}//To find the largest value
int find_minimum()
 {
  for(i = 0;i <= n;i ++){
    m3=test[i];
    if(m3>test[i+1])
    m3=test[i+1];
  }
   return m3;
 }//To find the smallest value
 int sort_array()
 {
  for (i = 0; i < n; ++i)
      {
          for (j = i + 1; j < n; ++j)
           {
                if (test[i] < test[j])
                {
                    a = test[i];
                    test[i] = test[j];
                    test[j] = a;
                }
           }
      }
 }
 void print_statistics()
{
  median=med;
  mean=find_mean();
}
printf(median);
}
