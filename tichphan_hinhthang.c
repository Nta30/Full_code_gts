#include<stdio.h>
 float f(float x){
 	return 1/(x+1);
 }
 float Tichphan(float a, float b, int n){
 	float h=(b-a)/n;
 	float S=f(a)+f(b);
 	float x;
 	int i;
 	for(i=1;i<n;i++){
 		x=a+i*h;
 		S+=2*f(x);
	 }
	S=(h/2)*S;
	return S; 
 }
 int main(){
 	int n;
 	float a,b;
 	printf("Nhap vao 2 can a,b,n:");
 	scanf("%f%f%d",&a,&b,&n);
 	printf("Ket qua la:%f",Tichphan(a,b,n));
 }
