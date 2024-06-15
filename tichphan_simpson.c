#include<stdio.h>
 float f(float x){
 	return 1/(x+1);
 }
 float Simpson(float a, float b, int n){
 	float h=(b-a)/n;
 	float S=f(a)+f(b);
 	float x;
 	int i;
 	for(i=1;i<n;i++){
 		x=a+i*h;
 		if(i%2!=0) S+=4*f(x);
 		else S+=2*f(x);
	 }
	 S=(h/3)*S;
	 return S;
 }
 int main(){
 	float a,b;
 	int n;
 	printf("Nhap vao 2 can a,b va n(n la so chan):");
 	scanf("%f%f%d",&a,&b,&n);
 	float x=Simpson(a,b,n);
 	printf("Ket qua tich phan la:%f",x);
 }
