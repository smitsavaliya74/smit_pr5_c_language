#include<stdio.h>
void main(){
int n,l;

printf("Enter the Array Row size : ");
scanf("%d", &n);

	printf("Enter the Array's Column size : ");	
	scanf("%d", &l);

int a[n][l];

int i,j;

printf("Enter Array elements:\n");

for(i=0;i<n;i++){
    for(j=0;j<l;j++) {
    printf("a[%d][%d]",i,j);
    scanf("%d",&a[i][j]);
    }
}
int b;

b=a[0][0];
    for(i=0;i<n;i++){
    for(j=0;j<l;j++){
    if(a[i][j]>b){
    b=a[i][j];
    }
    }
}
printf("The Largest element is : %d\n",b);
}

