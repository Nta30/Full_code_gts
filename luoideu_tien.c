#include<stdio.h>
 int giaithua(int n){
 	int i,total=1;
 	if(n==0) return 1;
 	for(i=1;i<=n;i++){
 		total*=i;
	 }
	return total; 
 } 
 void NT_luoideu_tien(int n, float x[], float y[], float x0){
 	int i,j;
 	float bangsaiphan[5][5];
 	for(i=0;i<n;i++){
 		bangsaiphan[i][0]=y[i];
	 }
	for(j=1;j<n;j++){
		for(i=0;i<n;i++){
			bangsaiphan[i][j]=bangsaiphan[i+1][j-1]-bangsaiphan[i][j-1];
		}
	}
	printf("Bang sai phan:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			printf("%f ",bangsaiphan[i][j]);
		}
		printf("\n");
	}
	float h=x[1]-x[0]; 
	float t=(x0-x[0])/h;
	float temp=1,total=bangsaiphan[0][0];
	for(i=1;i<n;i++){
		temp*=(t-(i-1));
		total+=(temp/giaithua(i))*bangsaiphan[0][i]; 
	}
	printf("Ket qua la:%f",total);
 }
 int main(){
 	int n=5;
 	float x[5]={0,1,2,3,4};
 	float y[5]={1,2,4,8,16};
 	float x0;
 	printf("Nhap vao gia tri can noi suy:");
 	scanf("%f",&x0);
 	NT_luoideu_tien(n,x,y,x0);
 }
