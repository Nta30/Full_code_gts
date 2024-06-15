#include<stdio.h>
#include<math.h>
 float g(float x){
 	return 0.5*sqrt(10-x*x*x);//Thay ptr vao day 
 }
 int main(){
 	float x0,x1,k,e,err;
	printf("Nhap vao x0, k, e:");//k la max cua g'(x)
	scanf("%f%f%f",&x0,&k,&e);
	while(1){
		x1=g(x0);
		err=fabs(x1-x0);
		x0=x1;
		if(err<=e*(1-k)/k) break;
	}
	printf("Ket qua la:%f",x1);
	return 0;
 }
