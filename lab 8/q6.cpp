#include<stdio.h>
int main(){
	int n=5;
	for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i==1&&j==2){
				printf("  ");
				continue;
			}
			if(i==2&&j==1||i==2&&j==3){
				printf("  ");
				continue;
			}
				if(i==3&&j==2){
				printf("  ");
				continue;
			}
			printf(" * ");
		}
		printf("\n");
	}
	return 0;
}