#include<stdio.h>
int main(){
	int arr[4][4],n=4;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("Enter score of team %d: ",i+1);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Array before is:\n");
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf(" %d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
for (int j = 0; j < n; j++) {
        for (int i = 0; i < n - 1; i++) {
            for (int k = i + 1; k < n; k++) {
                if (arr[i][j] > arr[k][j]) {
                    int temp = arr[i][j];
                    arr[i][j] = arr[k][j];
                    arr[k][j] = temp;
                }
            }
        }
    }

    printf("\nArray after sorting columns in ascending order:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
	
	return 0;
}