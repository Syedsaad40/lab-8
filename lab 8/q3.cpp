#include <stdio.h>
int main(){
	int num;
	printf("Enter the row number: ");
	scanf("%d",&num);
	for(int i=0;i<1;i++){
		for(int i=num;i>0;i--){
				for (int space=0;space<num-1;space++){
			printf(" ");
		}
			for (int j=i;j>0;j--){
				printf(" %d ",j);
					for (int space=0;space<num-1;space++){
			printf(" ");
		}
		}
			printf("\n");
		
	}
}
for(int i=0;i<1;i++){
		for(int i=2;i<=num;i++){
				for (int space=0;space<num-1;space++){
			printf(" ");
		}
			for (int j=i;j>0;j--){
				printf(" %d ",j);
					for (int space=0;space<num-1;space++){
			printf(" ");
		}
		}
			printf("\n");	

	}

}

	return 0;
}