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
 void Gauss_Seldel(int n, float a[][100], float b[], float x[]){
 	int i,j,count=0;
 	float x1;
 	float saiso_max;
 	do{
 		saiso_max=0;
 		for(i=0;i<n;i++){
 			float t=0;
 			for(j=0;j<n;j++){
 				if(j!=i){
 					t+=a[i][j]*x[j];
				 }
			 }
			x1=(b[i]-t)/a[i][i];
			double saiso = fabs(x1 - x[i]);
            if (saiso > saiso_max) {
                saiso_max = saiso;
            }
			x[i]=x1; 
		 }
		count++;
		printf("Lap lan %d",count); 
		Xuatmang(n,x); 
	 }while(saiso_max>=0.001);
 }
 int main(){
 	int n;
 	printf("Nhap vao kich thuoc cua he phuong trinh:");
 	scanf("%d",&n);
 	float a[100][100],b[100],x[100];
 	printf("Nhap vao ma tran a(%dx%d):\n",n,n);
 	Nhapmatran(n,a);
 	printf("Nhap vao vecto B:\n");
 	Nhapmang(n,b);
 	printf("Nhap gia tri khoi tao ban dau:\n");
 	Nhapmang(n,x);
 	Gauss_Seldel(n,a,b,x);
 } 
