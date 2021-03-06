/*  
C program to find sum of following series
 1 + 3^2/3^3 + 5^2/5^3 + 7^2/7^3 + ... till N terms
*/

#include<stdio.h>
#include<math.h>
    
int main()
{
	int i,N;
	float sum;
	int count;
	
	
	/*read value of N*/
	printf("Enter total number of terms: ");
	scanf("%d",&N);
	
	/*set sum by 0*/
	sum=0.0f;
	
	/*calculate sum of the series*/
	count=1;
	for(i=1;i<=N;i++)
	{
		sum = sum +  ( (float)(pow(count,2)) / (float)(pow(count,3)) );
		count+=2;
	}
	
	/*print the sum*/
	
	printf("Sum of the series is: %f\n",sum);
	
	return 0;
}
