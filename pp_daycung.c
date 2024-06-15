#include<stdio.h>
#include<math.h>
 float f(float x){
 	return x*x*x-x-1; 
 }
 int main(){
 	float x0,x1,e=0.00000001,saiso,a,b;
 	printf("Nhap khoang phan li nghiem (a,b):");
 	scanf("%f%f",&a,&b);
 	x0=a;
 	do{
 		x1=(a*f(b) - b*f(a))/(f(b)-f(a));
 		if(f(a)*f(x1)>0) a=x1;
 		else b=x1;
 		saiso=fabs(x1-x0);
 		x0=x1;
	 }while(saiso>=e);
	 printf("Ket qua la:%f",x1);
 } 
