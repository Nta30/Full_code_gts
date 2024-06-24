#include<stdio.h>
#include<math.h>
 void Nhapmatran(int n, float a[][100]){
 	int i,j;
 	for(i=0;i<n;i++){
 		for(j=0;j<n;j++){
 			scanf("%f",&a[i][j]);
		 }
	 }
 }
 void Nhapmang(int n, float a[]){
 	int i;
 	for(i=0;i<n;i++){
 		scanf("%f",&a[i]);
	 }
 }
 void Xuatmang(int n, float a[]){
 	int i;
 	for(i=0;i<n;i++){
 		printf("%f ",a[i]);
	 }
	printf("\n"); 
 }
 float Chuanvocung(float n, float a[]){
 	int i;
 	float max=0;
 	for(i=0;i<n;i++){
 		if(fabs(a[i])>max){
 			max=fabs(a[i]);
		 }
	 }
	return max; 
 }
 void jacobi(int n, float a[][100], float b[], float x0[]){
 	int i,j,count=0;
 	float x1[100],err;
 	do{
 		for(i=0;i<n;i++){
 			x1[i]=b[i]; 
 		    for(j=0;j<n;j++){
 				if(i!=j){
 					x1[i]-=a[i][j]*x0[j];
			 	}
		   	}
			x1[i]/=a[i][i]; 
	    }
	    err=fabs(Chuanvocung(n,x1)-Chuanvocung(n,x0));
	    for(i=0;i<n;i++){
	    	x0[i]=x1[i];
		}
		count+=1;
		printf("Lap lan %d: ",count); 
		Xuatmang(n,x1);
	}while(err>=0.000001); 
 }
 int main(){
 	int n;
 	printf("Nhap vao kich thuoc cua he phuong trinh:");
 	scanf("%d",&n);
 	float a[100][100],b[100],x0[100];
 	printf("Nhap vao ma tran A(%d x %d):\n",n,n);
 	Nhapmatran(n,a);
 	printf("Nhap mang b:\n");
 	Nhapmang(n,b);
 	printf("Nhap gia tri khoi tao:\n");
 	Nhapmang(n,x0);
 	jacobi(n,a,b,x0);
 }
