#include<stdio.h>
int main(){
int arr[4][4];
for(int i=0;i<4;i++){
	for(int j=0;j<4;j++){
		printf("Enter a number: ");
		scanf("%d",&arr[i][j]);
	}
}
printf("Array before:\n");
for(int i=0;i<4;i++){
	for(int j=0;j<4;j++){
		printf(" %d ",arr[i][j]);
	}
	printf("\n");
}
for(int i=0;i<4;i++){
	for(int j=0;j<4;j++){
		if(arr[i][j]<0){
			arr[i][j]=0;
		}
	}
}
printf("Array After:\n");
for(int i=0;i<4;i++){
	for(int j=0;j<4;j++){
		printf(" %d ",arr[i][j]);
	}
	printf("\n");
}
	return 0;
}