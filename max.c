#include<stdio.h> 

int max(int n, int x)
{ 
    if(n>x) return n;
    else return x; 
} 

int min(int n, int x)
{
    if(n<x) return n; 
    else return x; 
} 


int main(void) 
{ 
 int a=1, b=8; 
 int *pa= &a; 
 int *pb =&b; 
 
  int max_;
  max_=max(*pa,*pb); 
  
   printf("%d",max_); 
   
    int s=0; 
    int num=2;

   for( int i=100; i<s; i--)
         printf(max(i,pow(num,i))
 
} 
