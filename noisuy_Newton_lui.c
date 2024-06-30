#include<stdio.h>
 void Nhap(int n, float a[]){
 	int i;
 	for(i=0;i<n;i++){
 		scanf("%f",&a[i]);
	 }
 }
 void Newton_lui(int n, float x[], float y[],float x0){
 	int i,j;
 	float bangsaiphan[100][100];
 	for(i=0;i<n;i++){
 		bangsaiphan[i][0]=y[i];
	 }
	for(j=1;j<n;j++){
		for(i=0;i<n-j;i++){
			bangsaiphan[i][j]=(bangsaiphan[i+1][j-1]-bangsaiphan[i][j-1])/(x[i+j]-x[i]);
		}
	}
	printf("Bang sai phan:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			printf("%f ",bangsaiphan[i][j]);
		}
		printf("\n");
	}
	float total=y[n-1],t=1;
	for(i=1;i<n;i++){
		t*=(x0-x[n-i]);
		total+=bangsaiphan[n-i-1][i]*t;
	}
	printf("Ket qua noi suy tai %f la: %f",x0,total); 
 }
 int main(){
 	int n;
 	printf("Nhap vao so diem:");
 	scanf("%d",&n);
 	float x[n];
 	printf("Nhap vao cac moc gia tri x:\n");
 	Nhap(n,x);
 	float y[n];
 	printf("Nhap vao cac moc gia tri y:\n");
 	Nhap(n,y);
 	float x0;
 	printf("Nhap vao gia tri can noi suy:");
 	scanf("%f",&x0);
 	Newton_lui(n,x,y,x0);
 } 
