#include <stdio.h>

int main(){
	int number;
	int sum = 0;
	

	while(number != 0){
		printf("Nhap so nguyen n vao: ");
		scanf("%d",&number);
		sum += number;
	}printf("Tong la %d",sum);
}
