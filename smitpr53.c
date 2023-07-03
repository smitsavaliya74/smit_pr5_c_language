#include<stdio.h>
void main(){
int n,l;

printf("Enter the Array Row size : ");
scanf("%d",&n);

printf("Enter the Array's Column size : ");
scanf("%d",&l);
 int a[n][l];
 int i,j;
printf("Enter the elements are: \n");
for(i=0;i<=n;i++){
 	for(j=0;j<=l;j++){
 	printf("Enter a[%d][%d]: ",i,j);
 	scanf("%d",&a[i][j]);
	}
}
for(i=0;i<=n;i++){
	for(j=0;j<=l;j++){
	if(a[i][j]%2==0){
	printf("The Even number: %d\n",a[i][j]);
	}else{
	printf("The Odd number: %d\n",a[i][j]);
	}
	}
}
}
