#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main () {
	
	float v1x,v2x,v1y,v2y;
	double m, ret, val,vecx,vecy,mod;
	
	while(1){
		
		printf("Enter the coordinates of the first point (X / Y) \n");
		scanf("%f %f",&v1x,&v1y);
		printf("Enter the coordinates of the second point (X / Y) \n");
		scanf("%f %f",&v2x,&v2y);
		
		//Calculate vector by initial and terminal points
		
		vecx=v2x-v1x;
		vecy=v2y-v1y;
		
		//dot product == vecx because we compare with X axis
		
		//Calculate magnitude of a vectors
		mod=sqrt((vecx*vecx)+(vecy*vecy));
		
		//Calculate angle between vectors
		m=(vecx/mod);
		val = 180.0 / PI;
		ret = acos (m) * val;
		
		//With this program i get the angle but never more than 180 because i takes the nearest to x axis
		
		//This is the way i choose the angles that can be more than 180 taking the complementary
	
		if(v1y>v2y){
			ret=360-ret;
		}
		if((v1x==v2x)&&(v1y==v2y)){
			ret=0;
		}
				
		/*
		m=((v2y-v1y)/(v2x-v1x));
		val = 180.0 / PI;
		ret = atan (m) * val;
		
		while(ret<0){
			ret=ret+360;
		}
		*/
		
		printf("The angle is: %.2f\n", ret);
		   
	}
	return 0;
}
