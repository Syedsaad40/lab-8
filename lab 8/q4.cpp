#include<stdio.h>
int main(){
	int m=3,n=2;
int arr[m][n] ,arr2[m][n],arr3[m][n];
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		printf("Enter the number: ");
	scanf("%d",&arr[i][j]);
	}
}
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		printf("Enter the number: ");
	scanf("%d",&arr2[i][j]);
	}
}
int smat=0;
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		smat=0;
			smat=arr[i][j]+arr2[i][j];
			arr3[i][j]=smat;
	}
}

for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		printf("%d",arr3[i][j]);
		printf(",");
		}
		printf("\n");
}
	
	
	
	
	
	return 0;
}