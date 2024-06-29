#include<stdio.h>
#include<math.h>
 float g(float x){
 	return cbrt(4*x+7);//Thay ptr vao day 
 }
 int main(){
 	float x0=3,x1,err;
	while(1){
		x1=g(x0);
		err=fabs(x1-x0);
		x0=x1;
		if(err<=0.000001) break;
	}
	printf("Ket qua la:%f",x1);
	return 0;
 }
