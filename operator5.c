#include<stdio.h>
main()
{
	
	int x,y,z,xyz;  
	
	printf("enter value of X=");
	
	scanf("%d",&x);
	
	printf("enter value of Y=");
	
	scanf("%d",&y);
	
	printf("enter value of Z=");
	
	scanf("%d",&z);
	
    xyz=  x*x*x+y*y*y+z*z*z+3*x*x*y+3*x*y*y+3*y*y*z+3*y*z*z+3*x*z*z+3*x*x*z+6*x*y*z;

	
	printf("xy=%d",xyz);
	
	

	
	



}

