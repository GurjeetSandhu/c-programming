#include<stdio.h>
#include<stdlib.h>

struct _retire_info
{
  int months;
  double contribution;
  double rate_of_return;
};
typedef struct _retire_info retire_info;

void retirement(int startAge, double initial, retire_info working, retire_info retired)
{
  for(int i=0;i<873;i++)
    { int l=i;
	  l=l+startAge;
	 int j=l/12;
	 int k=l%12;
    
      if(i<=483)
	{
	  initial = (initial*working.rate_of_return*i)+ working.contribution+initial;
	   printf("Age %3d months %2d you have $%.2lf\n", j, k, initial);
     }
      else
	{
	  initial = (initial*retired.rate_of_return*i)+ retired.contribution+initial;
	   printf("Age %3d months %2d you have $%.2lf\n", j, k, initial);
	}
    }
  
}


int main() 
{
  int startAge = 327;
 int initial = 21345;
 retire_info working = {489,1000.0, 0.00375};
 retire_info retired = {384, -4000, 0.00083333};
 retirement(startAge, initial, working, retired); 
 return 0;
}
