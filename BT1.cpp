#include <stdio.h>

int main(){
	int array[100];
	int n,currentlenght,addindex,index;
	printf("So phan tu can nhap : ");
	scanf("%d",&n);
	currentlenght = n;
	for (int i = 0; i<n;i++){
		printf("Hay nhap phan tu array[%d] ",i);
		scanf("%d",&array[i]);
	}
	printf("Nhap vi tri can them : ");
	scanf("%d",&addindex);
	if (addindex > currentlenght){
		printf("Khong hop le");
	} else if (addindex >= currentlenght){
		printf("Nhap phan tu moi cho array[%d] : ",addindex);
		scanf("%d",&index);
		array[addindex] = index;
	} else if (addindex < currentlenght && addindex > 0){
		printf("Nhap phan tu moi cho array[%d] :",addindex);
		scanf("%d",&index);
		for (int j = currentlenght;j>=addindex - 1;j--){
			array[j + 1] = array[j];
		}
		array[addindex] = index;
	} else {
		printf("Nhap phan tu moi cho array[%d] : ",addindex);
		scanf("%d",&index);
		for (int j = currentlenght;j>=addindex - 1;j--){
			array[j + 1] = array[j];
		}
		array[0] = index;
	}
	for (int i = 0;i <= currentlenght;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
