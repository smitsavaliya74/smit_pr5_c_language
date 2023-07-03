#include<stdio.h>
void main(){
int n,l;
 printf("Enter the row size: ");
 scanf("%d",&n);

printf("Enter the column size: ");
scanf("%d",&m);

int i,j;
int c=0;
int b=0;
int a[n][m];

printf("Enter the elements:\n");
 
 for(i=0;i<n;i++){
	for(j=0;j<l;j++){
	printf("Enter A[%d][%d]:",i,j);
	scanf("%d",&a[i][j]);
	}
}

int x,y;
printf("Enter row number:");
scanf("%d",&x);
printf("\nElements of row are:");
for(j=0;j<=l;j++){
    printf("%d,",a[x][j]);
	b=b+a[x][j];
}
printf("The Sum of element's are: %d\n",b);
printf("Enter column number:\n");
scanf("%d",&y);
printf("\nElements of column: ");
  for(i=0;i<=n;i++){
  	printf("%d",a[i][y]);
  	c=c+a[i][y];
}
printf("\nThe sum :%d",add);
}
